#include <stdio.h>

int main(void) {
	int age = 19;

	/* Logical operators - mainly used in control statements such as if-statements and loops.
	 * We deal with logical operators when we are working with conditions. 
	 * An if-statement can have more than one condition and these are joined by logical operators. */

	/* List of logical operators:
	 * && - AND 
	 * || - OR 
	 * ! - NOT */

	//For this condition to be true, the age must be greater than 0 and also less than 120!
	if (age > 0 && age < 120)
		printf("This is true.\n");
	else
		printf("This is false.\n");

	/* This condition is true if I have at least washed the dishes or taken the dog out for a walk. 
	 * If I do not do either, then the condition will be false. */
	_Bool haveYouWashedTheDishes = 1;
	_Bool haveYouTakenTheDogForAWalk = 0;
	if (haveYouWashedTheDishes || haveYouTakenTheDogForAWalk)
		printf("You can go out.\n");
	else
		printf("You cannot go out.\n");
	 
	_Bool isCFunToLearn = 0; //_Bool stores only 0 or 1 where 0 represents false and 1 represents true.
	printf("%d\n", !isCFunToLearn); //When you negate true, it becomes false. When you negate false, it becomes true.

	_Bool isJavaEasyToLearn = 1;
	printf("%d\n", !isJavaEasyToLearn);

	getch();
	return 0;
}