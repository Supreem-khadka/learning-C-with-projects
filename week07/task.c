// Prompt the user for the values of A, B, and C and
// use those values to determine the value of "X" using the Quadratic Formula
// Author -> Supreem Khadka


#include <stdio.h>
#include <math.h>

int main(void){
	int a, b, c;
	printf("Enter the value of variable 'A': ");
	scanf("%i", &a);

	printf("Enter the value of variable 'B': ");
	scanf("%i", &b);

	printf("Enter the value of variable 'C': ");
	scanf("%i", &c);
	
	// Quadratic equation
	float x1 = (-(b) + sqrt((b * b) - (4 * a *c))) / (2 * a);
	
	float x2 = (-(b) - sqrt((b * b) - (4 * a *c))) / (2 * a);

	// plucking the value back at the equaltion for x1
	float x1_result = a * (x1 * x1) + (b * x1) + c;
	if (x1_result == 0){
		printf("The solution using the \"+\" operator is: %f\n", x1);
	}
	else{
		printf("The solution using the \"+\" operator is :%f, but you might want to double check", x1);
	}
		
	float x2_result = a * (x2 * x2) + (b * x2) + c;
	if (x2_result == 0){
		printf("The solution using the \"-\" operator is: %f\n", x2);
	}
	else{
		printf("The solution using the \"-\" operator is :%f, but you might want to double check", x2);
	}



}
