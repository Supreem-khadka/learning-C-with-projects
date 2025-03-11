// Initialize a char pointer variable using the malloc function to allocate memory
// for a char array by assigning the result of malloc() to your pointer
//
// Author -> Supreem Khadka


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char *string = malloc(sizeof(char) * 10);

	if (string == NULL)
	{
		printf("Unable to allocate memory!\n");
		return 1;
	}

	printf("Successfully allocated memory!\n");
	free(string);
	return 0;
}
