#include <stdio.h>
#include <stdlib.h> //Include stdlib.h to be able to use malloc(), calloc(), realloc() and free().

int main(void) {
	/* We can allocate/deallocate physical memory from our computer, for which C provides the following functions: 
	 * malloc(), calloc(), realloc() and free() which are found in the stdlib.h header file.
	 * The process of allocating/deallocating physical memory is known as dynamic memory allocation. 
	 * You can choose how much memory you want to allocate. However, you must be careful how much. 
	 * If you have 4GB of memory, do not try to allocate 4,294,967,296 or more. 
	 * You may risk slowing down your PC performance apart from potentially crashing your RAM 
	 * because there would be enough RAM to share among other processes and programs. */

	/* malloc() accepts only one argument: how much memory you want to allocate in bytes.
	 * iPtr points to the memory address of the block of memory allocated. */
	int* iPtr = (int*)malloc(1 * sizeof(int));
	
	/* There may be cases where malloc() is unable to allocate memory,
	 * this can be as a result of insufficient memory. 
	 * When this happens, malloc() returns a NULL pointer. 
	 * We should check whether iPtr is not null before proceeding with fetching the memory address and dereferencing the pointer. */
	if (iPtr != NULL) {
		printf("The memory address to which iPtr points is %p.\n", iPtr);
		*iPtr = 90;
		printf("The value of the memory address to which iPtr points is %d.\n", *iPtr);
		//I can dereference a pointer to also set a value apart from getting the value.
		*iPtr = 22;
		printf("The value of the memory address to which iPtr points is %d.\n", *iPtr);
	}

	/* What are the uses of pointers? 
	 * 1. Memory allocation
	 * 2. Functions 
	 * 3. File handling */
}