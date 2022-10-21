/* When you use scanf(), you will get a compiler error as follows: 
 * Error C4996 'scanf': This function or variable may be unsafe. Consider using scanf_s instead. 
 * To disable deprecation, use _CRT_SECURE_NO_WARNINGS.
 * Whilst we could use scanf_s(), this does not comply with ANSI C Standard 1990. 
 * Therefore, we force Visual Studio to let us use scanf() by typing #define _CRT_SECURE_NO_WARNINGS. 
 * This must be placed before any #include directives otherwise you will get an error. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //This header file contains both scanf() and printf().

int main(void) {
	int age = 0; //When dealing with input, you should always initialise a numeric data type (short, int, double, float) with the value 0.
	printf("Please enter your age: "); //Prompt user for input. This is used so we let the user know what they need to input.
	scanf("%d", &age); //Since age is of type int, we use the %d format specifier to get input of type integer.

	/* Comparison operators: 
	 * < - less than
	 * <= - less than or equal to
	 * > - greater than 
	 * >= - greater than or equal to 
	 * == - equal to 
	 * != - not equal to */
	if (age < 18) {
		printf("You are too young.");
	} else {
		printf("You are an adult.");
	}

	/* Unlike C# and Java, you will not be stopped if you try to enter text instead of a number. 
	 * C trusts the programmer and assumes they know what they are doing. */

	getch();
	return 0;
}