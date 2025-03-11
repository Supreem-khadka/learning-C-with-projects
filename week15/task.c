// understand pointers
//
// Author -> Supreem Khadka


#include <stdio.h>


int main(void){
	int variable = 15;
	int *ptr = &variable;

	printf("The value of int variable is: %i\n", variable);
	printf("The value of the pointer to the int variable is: %i\n", ptr);
	printf("The memory address of the int variable is: %i\n", &variable);
	printf("The value held at the memory location that the pointer is pointing to is: %i\n", *ptr);

	int list[2];
	list[0] = 3;
	printf("%i\t%i\n", *(&list[0]), *list);
}
