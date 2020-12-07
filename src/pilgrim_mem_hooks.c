#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "pilgrim_mem_hooks.h"
#include "pilgrim_addr_avl.h"
#include "dlmalloc-2.8.6.h"

AvlTree addr_tree;
static bool hook_installed = false;
static int current_addr_id = 0;


// Three public available function in .h
void install_mem_hooks() {
    hook_installed = true;
    addr_tree = NULL;
}

void uninstall_mem_hooks() {
    hook_installed = false;
    avl_destroy(addr_tree);
}

// Symbolic representation of memory addresses
int* addr2id(const void* buffer) {
    AvlTree node = avl_search(addr_tree, (intptr_t) buffer);
    if(node == AVL_EMPTY) {
        // Not found in addr_tree suggests that this buffer is not dynamically allocated
        // Maybe a stack buffer so we don't know excatly the size
        // We assume it as a 1 byte memory area.
        AvlTree new_node = avl_insert(&addr_tree, (intptr_t)buffer, 1);
        new_node->id = current_addr_id++;
        return &(new_node->id);
    } else {
        // First use
        if(node->id == -1)
            node->id = current_addr_id++;
        return &(node->id);
    }
}

/**
 * Below are Wrappers for intercepting memory management calls.
 */
void* malloc(size_t size) {
    if(!hook_installed)
        return dlmalloc(size);

    void* ptr = dlmalloc(size);

    avl_insert(&addr_tree, (intptr_t)ptr, size);
    return ptr;
}

void* calloc(size_t nitems, size_t size) {
    if(!hook_installed)
        return dlcalloc(nitems, size);

    void *ptr = dlcalloc(nitems, size);

    avl_insert(&addr_tree, (intptr_t)ptr, size*nitems);
    return ptr;
}

void* realloc(void *ptr, size_t size) {

    if(!hook_installed)
        return dlrealloc(ptr, size);

    void *new_ptr = dlrealloc(ptr, size);

    if(new_ptr == ptr) {
        AvlTree t = avl_search(addr_tree, (intptr_t)ptr);
        if(t != AVL_EMPTY) {
            t->size = size;
        }
    } else {
        avl_delete(&addr_tree, (intptr_t)ptr);
        avl_insert(&addr_tree, (intptr_t)new_ptr, size);
    }
    return new_ptr;
}

void free(void *ptr) {
    if(!hook_installed) {
        dlfree(ptr);
        return;
    }

    if(AVL_EMPTY == avl_search(addr_tree, (intptr_t)ptr)) {
        if(ptr != NULL) {
            // TODO: potential memory leak. why
            // printf("p%\n", ptr);
        }
    } else {
        avl_delete(&addr_tree, (intptr_t)ptr);
        dlfree(ptr);
    }
}


int posix_memalign(void **memptr, size_t alignment, size_t size) {
    return dlposix_memalign(memptr, alignment, size);
}

void *valloc(size_t size) {
    return dlvalloc(size);
}

void *memalign(size_t alignment, size_t size) {
    return dlmemalign(alignment, size);
}

void *pvalloc(size_t size) {
    return dlpvalloc(size);
}
