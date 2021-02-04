/* This file is generated automatically. Do not change. */
#include <stdlib.h>
#include <string.h>
#include <mpi.h>
#include "pilgrim.h"
#include "pilgrim_reader.h"
void read_record_args(int func_id, void* buff, CallSignature* cs) {
    int length, pos;
    size_t n;
    switch(func_id) {
		case ID_MPI_Type_delete_attr:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Sendrecv_replace:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int)*2;
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Win_create:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Aint);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_File_write_all_begin:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Error_class:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Free_mem:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Win_get_info:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Buffer_detach:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Aint_add:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Aint);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Aint);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Win_flush_local_all:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Comm_create_keyval:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm_copy_attr_function);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Comm_delete_attr_function);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Comm_get_parent:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Testany:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_T_cvar_handle_alloc:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_T_cvar_handle);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Comm_idup:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Request);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Win_set_name:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Type_dup:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_T_pvar_get_index:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Add_error_code:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Type_create_resized:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Aint);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Get_address:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Aint);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Iallgather:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Request);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Get_count:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int)*2;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Grequest_start:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Grequest_query_function);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Grequest_free_function);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Grequest_cancel_function);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Request);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Cartdim_get:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Allgather:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Cart_coords:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[2]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Comm_split_type:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Rsend:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_File_get_amode:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Neighbor_allgatherv:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Info_create:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Type_create_f90_complex:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Status_set_elements_x:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int)*2;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Count);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Comm_set_name:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Comm_remote_group:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Cart_shift:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Comm_size:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_T_pvar_get_num:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Request_free:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_File_read_all_end:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int)*2;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Irsend:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Comm_compare:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Ineighbor_alltoall:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Request);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Query_thread:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_T_cvar_get_index:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Allgatherv:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Neighbor_allgather:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_T_category_get_pvars:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Comm_free_keyval:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Op_create:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_User_function);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_T_enum_get_info:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_enum);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = strlen(buff+pos)+1;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Ssend_init:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Rsend_init:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Igatherv:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(MPI_Request);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_Mrecv:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Group_excl:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Group);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Comm_test_inter:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_read_all_begin:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Win_attach:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_read_at_all:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int)*2;
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_File_read_ordered_end:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int)*2;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Type_set_attr:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Group_union:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Group);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Type_get_contents:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[4] = length * sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			length = *((int*) (cs->args[2]));
			cs->arg_sizes[5] = length * sizeof(MPI_Aint);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Win_lock:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Type_size_x:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Count);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_T_category_changed:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Comm_set_info:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_T_pvar_stop:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_T_pvar_handle);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Type_get_envelope:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Send:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Win_delete_attr:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Finalize:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_Type_create_hindexed_block:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[2] = length * sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Keyval_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Alloc_mem:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Aint);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_get_atomicity:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Dist_graph_create:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_File_write_at:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int)*2;
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_File_close:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Comm_call_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Win_flush_local:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_create_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_File_errhandler_function);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Errhandler);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Group_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Ialltoall:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Request);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Comm_rank:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Cancel:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Request);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Win_post:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Type_commit:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_File_iwrite_shared:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Request);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Type_get_extent_x:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Count);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Count);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Probe:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int)*2;
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Cart_get:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[4] = length * sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Win_flush:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Intercomm_create:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Allreduce:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Type_contiguous:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Reduce:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_File_get_position:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Offset);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Recv_init:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Comm_group:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Is_thread_main:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_File_iwrite_all:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Request);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Type_create_indexed_block:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Wait:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_Type_create_hindexed:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[1] = length * sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[2] = length * sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Dist_graph_neighbors:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			length = *((int*) (cs->args[4]));
			cs->arg_sizes[5] = length * sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Error_string:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_sync:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Ineighbor_allgatherv:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Request);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Compare_and_swap:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Aint);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Win_unlock_all:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Type_get_attr:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Comm_disconnect:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_T_pvar_readreset:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_T_pvar_handle);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Attr_get:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_T_cvar_handle_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_cvar_handle);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_T_enum_get_item:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_enum);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = strlen(buff+pos)+1;
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_File_call_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Group_compare:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Imrecv:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Request);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_T_category_get_index:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Test_cancelled:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int)*2;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Buffer_attach:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Win_call_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Graph_neighbors_count:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_get_position_shared:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Offset);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Cart_map:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_File_iread:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Request);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Dist_graph_neighbors_count:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_T_cvar_get_info:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_T_enum);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = strlen(buff+pos)+1;
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(int);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_T_pvar_read:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_T_pvar_handle);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Type_set_name:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Neighbor_alltoallw:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Aint);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Neighbor_alltoallv:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Publish_name:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = strlen(buff+pos)+1;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Type_get_extent:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Aint);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Graph_create:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Put:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Aint);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Win_create_dynamic:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Ibsend:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Win_complete:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Graph_map:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Info_get_valuelen:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Cart_sub:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Info_get:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = strlen(buff+pos)+1;
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_File_iwrite_at:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Request);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Comm_spawn:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Group_intersection:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Group);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Iallgatherv:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Request);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Ibcast:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Request);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_File_read_at_all_begin:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Info_get_nthkey:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = strlen(buff+pos)+1;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_get_size:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Offset);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Rput:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Aint);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Request);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Type_indexed:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[1] = length * sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Send_init:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_File_write:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_File_set_info:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_set_atomicity:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Graph_get:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			length = *((int*) (cs->args[2]));
			cs->arg_sizes[4] = length * sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Pack_external_size:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(char);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Aint);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Type_create_darray:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[2]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			length = *((int*) (cs->args[2]));
			cs->arg_sizes[4] = length * sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			length = *((int*) (cs->args[2]));
			cs->arg_sizes[5] = length * sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			length = *((int*) (cs->args[2]));
			cs->arg_sizes[6] = length * sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(int);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_Win_set_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Errhandler);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Type_create_keyval:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Type_copy_attr_function);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Type_delete_attr_function);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Comm_accept:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Type_create_struct:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[1] = length * sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[2] = length * sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Gather:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Close_port:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Win_sync:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Type_create_subarray:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[1] = length * sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Win_free_keyval:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_File_write_at_all_end:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int)*2;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Rget_accumulate:
		{
			cs->arg_count = 13;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Aint);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(int);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			cs->arg_sizes[10] = sizeof(int);
			cs->args[10] = calloc(cs->arg_sizes[10], 1);
			memcpy(cs->args[10], buff+pos, cs->arg_sizes[10]);
			pos += cs->arg_sizes[10];
			cs->arg_sizes[11] = sizeof(int);
			cs->args[11] = calloc(cs->arg_sizes[11], 1);
			memcpy(cs->args[11], buff+pos, cs->arg_sizes[11]);
			pos += cs->arg_sizes[11];
			cs->arg_sizes[12] = sizeof(MPI_Request);
			cs->args[12] = calloc(cs->arg_sizes[12], 1);
			memcpy(cs->args[12], buff+pos, cs->arg_sizes[12]);
			pos += cs->arg_sizes[12];
			break;
		}
		case ID_MPI_Waitall:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_Comm_delete_attr:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Testall:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_Comm_create_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm_errhandler_function);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Errhandler);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Barrier:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Win_get_attr:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_File_get_byte_offset:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Offset);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Waitsome:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_Win_lock_all:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Comm_get_name:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Group_range_excl:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Group);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Comm_split:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_T_pvar_handle_alloc:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_T_pvar_handle);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_File_read_ordered_begin:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_File_read_ordered:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Attr_delete:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Win_get_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Errhandler);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_get_info:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Info_dup:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_write_shared:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_File_iread_at:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Request);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_File_write_all_end:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int)*2;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Comm_remote_size:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Type_get_name:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_write_at_all:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int)*2;
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_File_get_group:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_preallocate:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_iread_all:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Request);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_T_cvar_write:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_cvar_handle);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Group_translate_ranks:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Group);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[4] = length * sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Testsome:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_Type_create_hvector:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Comm_get_attr:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Initialized:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Comm_create_group:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Grequest_complete:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Request);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Get_accumulate:
		{
			cs->arg_count = 12;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Aint);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(int);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			cs->arg_sizes[10] = sizeof(int);
			cs->args[10] = calloc(cs->arg_sizes[10], 1);
			memcpy(cs->args[10], buff+pos, cs->arg_sizes[10]);
			pos += cs->arg_sizes[10];
			cs->arg_sizes[11] = sizeof(int);
			cs->args[11] = calloc(cs->arg_sizes[11], 1);
			memcpy(cs->args[11], buff+pos, cs->arg_sizes[11]);
			pos += cs->arg_sizes[11];
			break;
		}
		case ID_MPI_Win_create_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Win_errhandler_function);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Errhandler);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Init_thread:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_Win_fence:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_T_category_get_info:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = strlen(buff+pos)+1;
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Group_difference:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Group);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_T_pvar_start:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_T_pvar_handle);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Win_get_name:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Win_wait:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Scatterv:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_File_write_all:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Comm_connect:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Win_flush_all:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Win_get_group:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_set_size:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Status_set_cancelled:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int)*2;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Reduce_local:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_T_pvar_write:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_T_pvar_handle);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Graph_neighbors:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[2]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Dims_create:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Scatter:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Ireduce_scatter_block:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Ialltoallw:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(MPI_Request);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_Ialltoallv:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(MPI_Request);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_Comm_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_T_cvar_read:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_cvar_handle);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Neighbor_alltoall:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Alltoall:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Comm_spawn_multiple:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[0]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Comm_dup_with_info:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Pcontrol:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_T_pvar_handle_free:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_T_pvar_handle);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Type_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Win_test:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_write_at_all_begin:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Comm_get_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Errhandler);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Mprobe:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Info_get_nkeys:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Finalized:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Op_commutative:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Dist_graph_create_adjacent:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			length = *((int*) (cs->args[4]));
			cs->arg_sizes[5] = length * sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_Info_delete:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_iread_at_all:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Request);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Cart_rank:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_read_at:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int)*2;
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Iallreduce:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Type_size:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Fetch_and_op:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Aint);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Reduce_scatter_block:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Rget:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Aint);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Request);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Win_set_attr:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Type_create_f90_integer:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Iscatterv:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(MPI_Request);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_File_delete:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_read_all:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Group_size:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Attr_put:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Iscatter:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Request);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Win_start:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Win_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Alltoallw:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Alltoallv:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Exscan:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Op_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Iscan:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Keyval_create:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Copy_function);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Delete_function);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Type_vector:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Win_create_keyval:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Win_copy_attr_function);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Win_delete_attr_function);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Type_match_size:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Scan:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Startall:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_File_seek_shared:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Wtime:
		{
			cs->arg_count = 0;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			break;
		}
		case ID_MPI_Add_error_class:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Igather:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Request);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Info_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Open_port:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Win_allocate:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Aint);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Win_set_info:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Unpublish_name:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = strlen(buff+pos)+1;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Group_rank:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Lookup_name:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = strlen(buff+pos)+1;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Recv:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int)*2;
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Type_free_keyval:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Comm_get_info:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_T_pvar_session_create:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_T_init_thread:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_open:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Bsend:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Ireduce_scatter:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Irecv:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Issend:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_File_iwrite_at_all:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Request);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Abort:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Pack:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_File_iwrite:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Request);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Gatherv:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_Comm_create:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Group);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_write_ordered:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Comm_dup:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_T_finalize:
		{
			cs->arg_count = 0;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			break;
		}
		case ID_MPI_File_iread_shared:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Request);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_File_set_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Errhandler);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Register_datarep:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Datarep_conversion_function);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Datarep_conversion_function);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Datarep_extent_function);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Init:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_Reduce_scatter:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Ibarrier:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Request);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Type_create_f90_real:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_seek:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_T_cvar_get_num:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Group_incl:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Group);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Get_version:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Pack_external:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(char);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Aint);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Aint);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_File_read:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Type_get_true_extent:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Aint);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Cart_create:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[3] = length * sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Sendrecv:
		{
			cs->arg_count = 12;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(int);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			cs->arg_sizes[10] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[10] = calloc(cs->arg_sizes[10], 1);
			memcpy(cs->args[10], buff+pos, cs->arg_sizes[10]);
			pos += cs->arg_sizes[10];
			cs->arg_sizes[11] = sizeof(int)*2;
			cs->args[11] = calloc(cs->arg_sizes[11], 1);
			memcpy(cs->args[11], buff+pos, cs->arg_sizes[11]);
			pos += cs->arg_sizes[11];
			break;
		}
		case ID_MPI_Win_shared_query:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Comm_set_attr:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Win_allocate_shared:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Aint);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Type_get_true_extent_x:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Count);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Count);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Bcast:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Get_processor_name:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Info_set:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = strlen(buff+pos)+1;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Ineighbor_allgather:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Request);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Raccumulate:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Aint);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(MPI_Request);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_Pack_size:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Intercomm_merge:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_get_type_extent:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Get_library_version:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = strlen(buff+pos)+1;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Isend:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_T_pvar_reset:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_T_pvar_handle);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Start:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Request);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Unpack:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_File_get_view:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Offset);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = strlen(buff+pos)+1;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_T_pvar_session_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_T_pvar_session);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Iexscan:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Unpack_external:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(char);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Aint);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Win_unlock:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Test:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_Request_get_status:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Request);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int)*2;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Waitany:
		{
			read_record_args_special(func_id, buff, cs);
			break;
		}
		case ID_MPI_File_read_at_all_end:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int)*2;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_File_set_view:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = strlen(buff+pos)+1;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Status_set_elements:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int)*2;
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_T_category_get_categories:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Group_range_incl:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Group);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(MPI_Group);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_Get:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Aint);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_Iprobe:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Comm_join:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_read_shared:
		{
			cs->arg_count = 5;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int)*2;
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			break;
		}
		case ID_MPI_Win_detach:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Improbe:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int)*2;
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Ssend:
		{
			cs->arg_count = 6;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			break;
		}
		case ID_MPI_Ineighbor_alltoallw:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(MPI_Aint);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Aint);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(MPI_Request);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_Ineighbor_alltoallv:
		{
			cs->arg_count = 10;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(MPI_Request);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			break;
		}
		case ID_MPI_Wtick:
		{
			cs->arg_count = 0;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			break;
		}
		case ID_MPI_T_category_get_cvars:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			length = *((int*) (cs->args[1]));
			cs->arg_sizes[2] = length * sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Errhandler_free:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Errhandler);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Topo_test:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Ireduce:
		{
			cs->arg_count = 8;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(MPI_Request);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			break;
		}
		case ID_MPI_File_get_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Errhandler);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Bsend_init:
		{
			cs->arg_count = 7;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_Request);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			break;
		}
		case ID_MPI_Add_error_string:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Accumulate:
		{
			cs->arg_count = 9;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(MPI_Aint);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(int);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = sizeof(int);
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			break;
		}
		case ID_MPI_T_category_get_num:
		{
			cs->arg_count = 1;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			break;
		}
		case ID_MPI_Comm_set_errhandler:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Errhandler);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_Aint_diff:
		{
			cs->arg_count = 2;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Aint);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(MPI_Aint);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			break;
		}
		case ID_MPI_File_write_ordered_begin:
		{
			cs->arg_count = 4;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			break;
		}
		case ID_MPI_File_write_ordered_end:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int)*2;
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_Graphdims_get:
		{
			cs->arg_count = 3;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(MPI_Comm)+sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = sizeof(int);
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			break;
		}
		case ID_MPI_T_pvar_get_info:
		{
			cs->arg_count = 13;
			cs->arg_sizes = malloc(cs->arg_count * sizeof(int));
			cs->args = malloc(cs->arg_count * sizeof(void*));
			pos = 0;
			cs->arg_sizes[0] = sizeof(int);
			cs->args[0] = calloc(cs->arg_sizes[0], 1);
			memcpy(cs->args[0], buff+pos, cs->arg_sizes[0]);
			pos += cs->arg_sizes[0];
			cs->arg_sizes[1] = strlen(buff+pos)+1;
			cs->args[1] = calloc(cs->arg_sizes[1], 1);
			memcpy(cs->args[1], buff+pos, cs->arg_sizes[1]);
			pos += cs->arg_sizes[1];
			cs->arg_sizes[2] = sizeof(int);
			cs->args[2] = calloc(cs->arg_sizes[2], 1);
			memcpy(cs->args[2], buff+pos, cs->arg_sizes[2]);
			pos += cs->arg_sizes[2];
			cs->arg_sizes[3] = sizeof(int);
			cs->args[3] = calloc(cs->arg_sizes[3], 1);
			memcpy(cs->args[3], buff+pos, cs->arg_sizes[3]);
			pos += cs->arg_sizes[3];
			cs->arg_sizes[4] = sizeof(int);
			cs->args[4] = calloc(cs->arg_sizes[4], 1);
			memcpy(cs->args[4], buff+pos, cs->arg_sizes[4]);
			pos += cs->arg_sizes[4];
			cs->arg_sizes[5] = sizeof(int);
			cs->args[5] = calloc(cs->arg_sizes[5], 1);
			memcpy(cs->args[5], buff+pos, cs->arg_sizes[5]);
			pos += cs->arg_sizes[5];
			cs->arg_sizes[6] = sizeof(MPI_T_enum);
			cs->args[6] = calloc(cs->arg_sizes[6], 1);
			memcpy(cs->args[6], buff+pos, cs->arg_sizes[6]);
			pos += cs->arg_sizes[6];
			cs->arg_sizes[7] = strlen(buff+pos)+1;
			cs->args[7] = calloc(cs->arg_sizes[7], 1);
			memcpy(cs->args[7], buff+pos, cs->arg_sizes[7]);
			pos += cs->arg_sizes[7];
			cs->arg_sizes[8] = sizeof(int);
			cs->args[8] = calloc(cs->arg_sizes[8], 1);
			memcpy(cs->args[8], buff+pos, cs->arg_sizes[8]);
			pos += cs->arg_sizes[8];
			cs->arg_sizes[9] = sizeof(int);
			cs->args[9] = calloc(cs->arg_sizes[9], 1);
			memcpy(cs->args[9], buff+pos, cs->arg_sizes[9]);
			pos += cs->arg_sizes[9];
			cs->arg_sizes[10] = sizeof(int);
			cs->args[10] = calloc(cs->arg_sizes[10], 1);
			memcpy(cs->args[10], buff+pos, cs->arg_sizes[10]);
			pos += cs->arg_sizes[10];
			cs->arg_sizes[11] = sizeof(int);
			cs->args[11] = calloc(cs->arg_sizes[11], 1);
			memcpy(cs->args[11], buff+pos, cs->arg_sizes[11]);
			pos += cs->arg_sizes[11];
			cs->arg_sizes[12] = sizeof(int);
			cs->args[12] = calloc(cs->arg_sizes[12], 1);
			memcpy(cs->args[12], buff+pos, cs->arg_sizes[12]);
			pos += cs->arg_sizes[12];
			break;
		}
	}
}
