#include <mpi.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "pilgrim.h"

int MPI_Pcontrol(const int level, ...)
{
	void **args = assemble_args_list(1, &level);
	int sizes[] = { sizeof(level) };
	va_list pcontrol_args;
	va_start(pcontrol_args, level);
	PILGRIM_TRACING(int, MPI_Pcontrol, (level, pcontrol_args), 1, sizes, args);
	va_end(pcontrol_args);
}
int MPI_Waitsome(int incount, MPI_Request array_of_requests[], int *outcount, int array_of_indices[], MPI_Status array_of_statuses[])
{
    // This runs the original function, so we know the correct value for output arguments
	PILGRIM_TRACING_1(int, MPI_Waitsome, (incount, array_of_requests, outcount, array_of_indices, array_of_statuses))
    if(array_of_statuses == MPI_STATUSES_IGNORE) {
        void **args = assemble_args_list(4, &incount, array_of_requests, outcount, array_of_indices);
        int sizes[] = { sizeof(incount), incount * sizeof(MPI_Request), 1 * sizeof(int), (*outcount) * sizeof(int)};
        PILGRIM_TRACING_2(4, sizes, args);
    } else {
        void **args = assemble_args_list(5, &incount, array_of_requests, outcount, array_of_indices, array_of_statuses);
        int sizes[] = { sizeof(incount), incount * sizeof(MPI_Request), 1 * sizeof(int), (*outcount) * sizeof(int), (*outcount) * sizeof(MPI_Status) };
        PILGRIM_TRACING_2(5, sizes, args);
    }
}
int MPI_Waitall(int count, MPI_Request array_of_requests[], MPI_Status array_of_statuses[])
{
    if(array_of_statuses == MPI_STATUSES_IGNORE) {
        void **args = assemble_args_list(2, &count, array_of_requests);
        int sizes[] = { sizeof(count), count * sizeof(MPI_Request)};
	    PILGRIM_TRACING(int, MPI_Waitall, (count, array_of_requests, array_of_statuses), 2, sizes, args);
    } else {
        void **args = assemble_args_list(3, &count, array_of_requests, array_of_statuses);
        int sizes[] = { sizeof(count), count * sizeof(MPI_Request), count * sizeof(MPI_Status) };
	    PILGRIM_TRACING(int, MPI_Waitall, (count, array_of_requests, array_of_statuses), 3, sizes, args);
    }
}
int MPI_Testall(int count, MPI_Request array_of_requests[], int *flag, MPI_Status array_of_statuses[])
{
    if(array_of_statuses == MPI_STATUSES_IGNORE) {
        void **args = assemble_args_list(3, &count, array_of_requests, flag);
        int sizes[] = { sizeof(count), count * sizeof(MPI_Request), 1 * sizeof(int)};
        PILGRIM_TRACING(int, MPI_Testall, (count, array_of_requests, flag, array_of_statuses), 3, sizes, args);
    } else {
        void **args = assemble_args_list(4, &count, array_of_requests, flag, array_of_statuses);
        int sizes[] = { sizeof(count), count * sizeof(MPI_Request), 1 * sizeof(int), count * sizeof(MPI_Status) };
        PILGRIM_TRACING(int, MPI_Testall, (count, array_of_requests, flag, array_of_statuses), 4, sizes, args);
    }
}
int MPI_Testsome(int incount, MPI_Request array_of_requests[], int *outcount, int array_of_indices[], MPI_Status array_of_statuses[])
{
	PILGRIM_TRACING_1(int, MPI_Testsome, (incount, array_of_requests, outcount, array_of_indices, array_of_statuses))
    if(array_of_statuses == MPI_STATUSES_IGNORE) {
        void **args = assemble_args_list(4, &incount, array_of_requests, outcount, array_of_indices);
        int sizes[] = { sizeof(incount), incount * sizeof(MPI_Request), 1 * sizeof(int), (*outcount) * sizeof(int)};
        PILGRIM_TRACING_2(4, sizes, args);
    } else {
        void **args = assemble_args_list(5, &incount, array_of_requests, outcount, array_of_indices, array_of_statuses);
        int sizes[] = { sizeof(incount), incount * sizeof(MPI_Request), 1 * sizeof(int), (*outcount) * sizeof(int),  (*outcount) * sizeof(MPI_Status) };
        PILGRIM_TRACING_2(5, sizes, args);
    }
}
