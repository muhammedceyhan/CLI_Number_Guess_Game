#include<stdio.h>
#include <stdlib.h>

#include<time.h>
int main(){
    int tryAgain = 1;
    srand(time(NULL));
    while(tryAgain == 1){

        int value =  (rand() % 10) + 1;
        int answer = 0;
        int inputStatus = 0;
        for(int i = 5; i > 0; i--){

            printf("Guess: ");
            inputStatus = scanf("%d", &answer);
            if(inputStatus != 1){
                printf("Enter a valid input");
                i++;
            }

            if(answer == value){
                printf("You won the answer was %d", answer);
                return 0;
            }else{
                printf("Try Again... You have %d more chances \n", i -1);
            }
        }
        printf("You have use all of your rights. \n");
        printf("Press 1 to play again: ");
        fflush(stdout); 
        scanf("%d", &tryAgain); 

    }
    printf("Game Ended.");

}