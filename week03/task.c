#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	// Pointer to a char to store the first and the last name
	char *first_name = malloc(sizeof(char));
	char *last_name = malloc(sizeof(char));

	// Prompt the users for input and store them in the pointer
	printf("First name: ");
	scanf("%s", first_name);
	printf("Last name: ");
	scanf("%s", last_name);

	printf("Hello %s  %s!\n",first_name, last_name);
	free(first_name);
	free(last_name);
	return 0;
}
