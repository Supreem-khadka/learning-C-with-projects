// Ask the user for a number between 1 and 500 and display what range the number is from
// Author -> Supreem Khadka

#include <stdio.h>

int main(void){
	int num;
	printf("Enter a number between 1 and 500: ");
	scanf("%i", &num);
	int max, min;
	int found = 0;
	for(int i = 5; i >= 1; i--){
		max = i * 100;
		min = max - 99;

		if (num <= max && num >= min){
			printf("Your number is between %i and %i!#\n", max, min);
			found = 1;
			break;
		}
	}
	if (!found){
		printf("Your number was not in any of our ranges.#\n");
	}
	
}
