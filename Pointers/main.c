#include <stdio.h>

int main(void) {
	int num = 5; //Declare a integer variable named to which you should assign the value 5.
	//A pointer is a special variable that points to the memory address of a variable.
	int* iPtr = NULL; //Always initialise a pointer to null to avoid wild pointers.
	iPtr = &num; //iPtr will point to the memory address of the integer variable num.
	printf("The memory address of num is %p.\n", &num);
	//%p is a format specifier to display memory addresses of variables or pointers in printf().
	printf("The memory address of iPtr is %p\n", iPtr);

	//Use == to compare the memory address to which iPtr points.
	if (iPtr == &num) {
		printf("iPtr is pointing to the memory address of num!\n");
	} else {
		printf("iPtr is not pointing to the memory address of num!\n");
	}

	printf("The size of iPtr is %zu.\n", sizeof(iPtr));

	//Dereferencing a pointer means to get the value of a variable to which a pointer points.
	printf("The value of the variable to which iPtr points is %d.\n", *iPtr);
	if (*iPtr == num)
		printf("*iPtr and num have the same value.");
	else
		printf("*iPtr and num do not have the same value.");

	free(iPtr); //Release memory from pointer. Do not try to dereference a null pointer.

	//Wild pointer - uninitialised pointer and when you try to have point to a random memory access location. */
	
	getch();
	return 0;
}