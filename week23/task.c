#include <stdio.h>

typedef struct structure {
	int x;
} example;

int main(void)
{
	example *ptr;
	example test;
	ptr = &test;

	// standard dot notation
	test.x = 10;
	printf("%i\n", test.x);

	(*ptr).x = 20;
	printf("%i\n", test.x);

	ptr->x = 30;
	printf("%i\n", test.x);

}
