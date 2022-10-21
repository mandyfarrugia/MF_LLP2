#include <stdio.h>

/* Structs (formally known as structures) refer to a collection of data. 
 * In this case, we have grouped several fields common to a person. 
 * The struct person represents what defines a person. */
struct person {
	int personId;
	char name[20];
	char surname[20];
	int age;
	char emailAddress[50];
} typedef person; //So you don't have to constantly type struct person when declaring a variable of its type.

int main(void) {
	/* Created a variable of type struct person named p1.We assign the values between the curly brackets. 
	 * Make sure to assign the values in the correct order in which the fields were specified. */

	//struct person p1 = { 473501, "Mandy", "Farrugia", 20, "mandy.farrugia.c10352@mcast.edu.mt" };
	person p1 = { 473501, "Mandy", "Farrugia", 20, "mandy.farrugia.c10352@mcast.edu.mt" };
	printf("Name and surname: %s %s (%d)\nAge: %d\nEmail: %s", p1.name, p1.surname, p1.personId, p1.age, p1.emailAddress);

	getch();
	return 0;
}