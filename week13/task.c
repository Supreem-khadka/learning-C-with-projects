// A program that prompts the user to input scoring totals for 5 player during a basketball game
// The program tracks which player had the highest scoring average over the 4 games and print the result to the terminal
//
// Author -> Supreem Khadka


#include <stdio.h>

int main(void){
	
	int players_num = 5;
	int games = 4;
	int players[players_num];
	for (int i = 0; i < players_num; i++){
		// set the value 0 for each elements in the array
		players[i] = 0;
	}
	
	for (int i = 0; i < games; i++){
		printf("Game #%i\n", (i + 1));
		for (int j = 0; j < players_num; j++){
			int player = j + 1;
			int num = 0;
			printf("Enter scoring total for player #%i: ", player);
			scanf("%i", &num);
			num = num + players[j];
			players[j] = num;
			//printf("%i, %i\n", players[j], num);
		}
	}
	
	int win_index = 0;	
	for (int i = 0; i < players_num; i++){
		if (players[i] > players[win_index]){
			win_index = i;
		}
	}

	float win_points = players[win_index] / 4.0;

	printf("Player #%i had the highest scoring average at %.2f points per game.\n", (win_index + 1), win_points);


}
