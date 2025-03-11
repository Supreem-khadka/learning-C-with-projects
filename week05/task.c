#include <stdio.h>

int main(void){
	int seconds = 0;

	printf("Enter the amount in seconds: ");
	scanf("%i", &seconds);

	float input = seconds;
	
	// Operation to convert the seconds into hours
	// 1 hour = 60 * 60 = 3600 seconds
	// 1 min = 60 seconds
	
	int hours;
	hours = seconds / 3600;
	seconds = seconds % 3600;

	int min = seconds / 60;
	seconds = seconds % 60;

	printf("%i seconds is equal to %i hours, %i minuted, and %i seconds.\n", (int)input, hours, min, seconds);
	
}
