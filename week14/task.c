// Initialize and declare an "int" variable with any value.
// Assign a pointer variable to the int variable you just declared and then print the value of the pointer variable
//
// Author -> Supreem Khadka


#include <stdio.h>

int main(void){
	int num = 4;
	int *pointer_num = &num;
	printf("%p\n", pointer_num);
	printf("%p\n", &num);

	printf("The value of num is: %i\n", *pointer_num);
	*pointer_num = 10;
 	printf("The value of num is: %i\n", *pointer_num);
}
