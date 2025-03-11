// Declare a function that prints "hello world" to the terminal and then call that function inside the main() function
// Use a function prototype to establish you function and then add a function definition below main()
//
// Author -> Supreem Khadka


#include <stdio.h>

// funciton prototypes
void print_hello(void);

int main(void){
	
	print_hello();
	return 0;
}

void print_hello(void){
	printf("Hello, World!\n");
}
