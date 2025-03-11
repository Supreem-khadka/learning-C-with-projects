#include <stdio.h>

int main(void){

	int num; //Initialize a variable to store integer
	num = 11; // assigned the value to that variable
	
	//initialize and assign value for float
	float f = 12.99;

	//initialize and assign a char value
	char c[] = "Hello World\0";

	printf("%i is an integer!\n%f is a float\n%s is an array of char!\n", num, f, c);
	printf("\n\n%p is the address of the variable num\n", &num);
	
	printf("%c is the first char\n", *(&c[0]));
	printf("%c is the last char\n", *(&c[11]));
	return 0;


}
