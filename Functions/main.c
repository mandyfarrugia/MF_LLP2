#include <stdio.h>

struct person {
	int personId;
	char name[20];
	char surname[20];
	int age;
	char emailAddress[50];
} typedef person;

//A function reduces code repetition because code can be grouped into a function and reused by calling the function.
void printDetails(person p) {
	printf("Name and surname: %s %s (%d)\nAge: %d\nEmail: %s\n\n", p.name, p.surname, p.personId, p.age, p.emailAddress);
}

int main(void) {
	person p1 = { 473501, "Mandy", "Farrugia", 20, "mandy.farrugia.c10352@mcast.edu.mt" };
	person p2 = { 482424, "Joe", "Debono", 49, "joe.debono@mcast.edu.mt" };
	//Create array of person structs and store structs p1 and p2 in array.
	person persons[2] = { p1, p2 };

	//Loop through array and call printDetails for each struct.
	for (int i = 0; i < sizeof(persons) / sizeof(persons[0]); i++)
		printDetails(persons[i]);

	getch();
	return 0;
}