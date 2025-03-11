// Design a struct which will have memebers that describe an employee
// Design a second struct that will store two employees as members
// The employees will be structures of the type of your first struct
//
// Author -> Supreem Khadka


#include <stdio.h>
#include <stdlib.h>


typedef struct info {
	char *lastName;
	char *firstName;
	char *title;
	int id;
	int ssn;
} employee;

typedef struct emp {
	employee person[2];
} employees;


int main(void)
{

	employees members;
	for (int i = 0; i < 2; i++)
	{
		members.person[i].firstName = malloc(sizeof(char) * 10);
		members.person[i].lastName = malloc(sizeof(char) * 10);
		members.person[i].title = malloc(sizeof(char) * 10);

		printf("Enter the employee's first name: ");
		scanf("%s", members.person[i].firstName);

		printf("Enter the employee's last name: ");
		scanf("%s", members.person[i].lastName);

		printf("Enter the employee's ID: ");
		scanf("%i", &members.person[i].id);

		printf("Enter the employee's ssn: ");
		scanf("%i", &members.person[i].ssn);

		printf("Enter the employee's title: ");
		scanf("%s", members.person[i].title);

		printf("\n");
	}

	for (int i = 0; i < 2; i++)
	{
		printf("Employee information for %s %s:\n", members.person[i].firstName, members.person[i].lastName);
		printf("ID: %i\n", members.person[i].id);
		printf("SSN: %i\n", members.person[i].ssn);
		printf("Title: %s\n", members.person[i].title);
	}


	return 0;
}
