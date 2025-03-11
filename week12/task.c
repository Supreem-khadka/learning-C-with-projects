// Prompt the user for a number of coin flips
// and then simulate number of coin flips and print the results in to the terminal
//
// Author -> Supreem Khadka


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

	// intialize variable
	int coin_flips = 0;
	int heads = 0;
	int tails = 0;
	int num;
	
	printf("How many times would you like to flip the coin? ");
	scanf("%i", &coin_flips);
	
	srand(time(NULL));

	// loop to simulate the flips
	for (int i = 0; i < coin_flips; i++){
		num = rand() % 2;
		if (num == 0){
			heads++;
		} else{
			tails++;
		}
	}

	printf("After flipping the coin %i times, the results were\n", coin_flips);
	printf("%i heads\n%i tails\n", heads, tails);
	return 0;
}
