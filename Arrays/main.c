#include <stdio.h>

int main(void) {
	/* The skeleton of how to declare an array.
	 * <data type> nameOfArray[number of elements] = { <elements go here, each separated by a comma> }; */

	//Declaring an integer array with a size of 5.
	int lottoNumbers[5] = { 23, 40, 29, 18, 17 };

	/* The total number of elements in an array can be calculated as follows: 
	 * sizeof(lottoNumbers) / sizeof(lottoNumbers[0])
	 * A single integer takes up 4 bytes of memory. If we want 5 integers, then 4 bytes * 5 integers = 20 bytes. 
	 * 20 bytes / 4 bytes of one integer = The array has 5 elements. */ 

	int numberOfElements = sizeof(lottoNumbers) / sizeof(lottoNumbers[0]);

	/* A loop is used to repeat a block of code a certain number of times until a condition is met. 
	 * In programming, indexes/positions of an array start from 0 and not 1! 
	 * This is applicable to not only C but also C#, C++, Java, JavaScript, PHP, etc. */

	//Initialise i to 0. Keep on going until the counter is about to reach 5.
	for (int i = 0; i < numberOfElements; i++) {
		printf("%d\n", lottoNumbers[i]); //Access lottoNumbers by index. Based on the index, if there is a value in that particular index, you get that value.
	}

	getch();
	return 0;
}