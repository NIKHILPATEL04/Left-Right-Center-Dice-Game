#include <stdio.h>
#include <stdlib.h>
#include "names.h"
#define SEED 4823

typedef enum { DOT, LEFT, CENTER, RIGHT } Position;
const Position die[6] = {
	DOT,
	DOT,
	DOT,
	LEFT,
	CENTER,
	RIGHT
};


int main(void) {
	int num_players = 3;
	printf("Number of players (3 to 10)? ");
	int scanf_result = scanf("%d", &num_players);
	if (scanf_result < 1 || num_players < 3 || num_players > 10) {
		fprintf(stderr, "Invalid number of players. Using 3 instead.\n");
		num_players = 3;
	}
	unsigned seed = 4823;
	printf("Random-number seed? ");
	scanf_result = scanf("%u", &seed);
	if (scanf_result < 1) {
		fprintf(stderr, "Invalid seed. Using 4823 instead.\n");
		seed = 4823;
	}

	// seting seed and  hading out chips//

	srandom(seed);
	int player_chips[] = {0,0,0,0,0,0,0,0,0,0};
	for (int j = 0; j < num_players; j++){
		player_chips[j] = 3;
	}

	//while loop for rounds //
	int winner = 0;

	while(winner == 0){

        	for (int player = 0; player < num_players; player++) {
			
			int index = 0;
			int count = 0;
                        for (int i = 0; i < num_players; i++) {
				if(player_chips[i] > 0){
                                	count++;
					index = i;
                                                 }
                                if(i == num_players-1){
                                	if(count == 1){
                                        	winner +=1;
                                        	printf("%s won!\n", player_name[index]);
                                                return 0 ;

                        }
                }
        }

            		if (player_chips[player] > 0) {
                		printf("%s:", player_name[player]);
				// roll dice for each player
					int playerchips = player_chips[player];

					for (int tokens = 0; tokens < playerchips && tokens < 3; tokens++){
						Position roll = die[random() % 6];


						if (roll == DOT){
							
					
						}else if (roll == LEFT){
							if(player != (num_players - 1)){
        							player_chips[player]--;
								player_chips[player +1]++;
								}
							else if(player == (num_players-1)) {
								player_chips[player]--;
								player_chips[0]++; 
								}}
						else if (roll == CENTER){
							player_chips[player]--;
							}
						else if (roll == RIGHT){
							if(player != (0)){
								player_chips[player]--;
  								player_chips[player -1]++;
								}
							else if(player == (0)){
								player_chips[player]--;
								player_chips[num_players-1]++;}

						}
					
					}



				printf(" ends her turn with %d\n", player_chips[player]);


				}

			}






}
return 0;
}
