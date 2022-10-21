#include <stdio.h>

int main(void) {
	/* Let's see what happens when we try to force a large integer value into a short int data type.
	 * We know that a signed short int accepts up to 32767. */
	int iNum = 100000;
	/* You bypass compiler and runtime errors (will not be allowed in C# and Java),
	 * but you will experience data loss. 100000 has been reduced to -31072. */
	short sNum = (short)iNum; //Use typecasting to force the compiler to treat iNum as short (very risky! - explicit type conversion).
	printf("The value is %hd\n", sNum);

	//Let's see what happens when we try to store a value of type short into an integer.
	short sNum2 = 31000;
	/* Although the compiler will automatically convert the value of sNum2 to integer, 
	 * I have used typecasting to demonstrate that we are forcing the compiler to treat sNum2 as an integer. */
	int iNum2 = (int)sNum2;
	//No data has occurred because sNum2 was able to fit into iNum2 just fine.
	printf("The value is %d\n", iNum2);

	getch();
	return 0;
}