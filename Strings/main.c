/* strcpy() is deemed unsafe by Visual Studio. We should not use strcpy_s() because it is not up to ANSI C Standard. 
 * Thus we use #define _CRT_SECURE_NO_WARNINGS to bypass this error. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //Include <string.h> to be able to use strcpy(), strlen() and strcmp().

int main(void) {
	/* As opposed to C# and Java, there are no strings. 
	 * Instead we declare an array of characters. */
	
	char name[10]; //Declare an array of characters.
	strcpy(name, "Mandy"); //strcpy() copied "Mandy" to name. This is how you should assign text to a string.
	printf("The person's name is %s\n", name);

	/* strcmp() is used to compare two strings, usually to check whether they are equal.
	 * strcmp() returns 0 / false if both strings are equal. */
	if (!strcmp(name, "Mandy")) {
		printf("These are the same!\n");
	}
	else {
		printf("These are not the same.\n");
	}

	//strlen() counts how many characters there in a string.
	printf("%s is %d characters long.\n", name, strlen(name));

	getch();
	return 0;
}