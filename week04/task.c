// Takes the input of length of radius from the user and
// prints the area of the user's circle to the terminal


#include <stdio.h>

#define PIE 3.14 

int main(void){
	
	float radius = 0;
	float area = 0;
	printf("Enter the radius of your circle: ");
	scanf("%f", &radius);

	// calculate the area of the circle pie * (r ^ 2 )
	area = PIE * (radius * radius);

	printf("The area of your circle is %.4f\n", area);
	return 0;
}
