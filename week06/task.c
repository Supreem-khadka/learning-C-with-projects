// Prompt the user for a numerator and a denominator and tell
// if whether or not there is a remainder using "if" control flow
// Author -> Supreem Khadka


#include <stdio.h>

int  main(void){
	
	int numerator, denominator;
	
	printf("Enter a numerator: ");
	scanf("%i", &numerator);

	printf("Enter a denominator: ");
	scanf("%i", &denominator);
	
	// operation to see if their will be remainder after their division

	if (numerator % denominator == 0){
		printf("There is NOT a remainder!#\n");
	}
	else{
		printf("There is a remainder!#\n");
	}

	return 0;

}
