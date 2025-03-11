// Create/ Define a structure outside of main() than includes
// an int, char, and float member.
// Inside of main(), declare values for those struct members and then print
// their values to the terminal
//
// Author -> Supreem Khadka


#include <stdio.h>

typedef struct structure {
	int i;
	char c;
	float f;
} use;

int main(void)
{
	use my_struct;
	my_struct.i = 5;
	my_struct.c = 'a';
	my_struct.f = 3.4;

	printf("This is the int: %i, this is the char: %c, this is the float: %f\n", my_struct.i, my_struct.c, my_struct.f);

	return 0;
}
