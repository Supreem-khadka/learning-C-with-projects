// Ask the users for test scores and then keep asking the user if they would like to countinue
// or end the program.
// Store all test score values and calculate an average score that prints to the terminal when the user 
// ends the program
// The array could be initialized to a size of 10 
//
// Author -> Supreem Khadka


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(void){
	
	// initialize the variables
	int marks[10]; // an array of size 10 to store the marks
	int count = 0; // count of the number of times the mark has been provided
	char *choice = malloc(sizeof(char) * 3); // to store the users choice regarding does he want to continue or end
	float average = 0 ; // to count the average of the score
       	while (true){

		if (count > 9){
			break;
		}

		printf("Enter a test score: ");
		scanf("%i", &marks[count]);
		count++;

		// prompt the user if he wants to continue or not
		printf("Would you like to continue? Y/N ");
		scanf("%s", choice);

		if (strcmp(choice, "y") == 0 || strcmp(choice, "Y") == 0){
			continue;
		} else{
			break;
		}


      	}
	for (int i = 0; i < count; i++){
		average += marks[i];
	}
	
	//count the average
	average = average / count;

	printf("%.2f is the average\n", average);	
}
