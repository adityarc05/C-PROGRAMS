#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
    int r, guess;
    int gu_c = 0;
    srand(time(0));

    r = (rand()% 100)+1;
    
    do {
        printf("Enter the guessed number : ");
        scanf("%d", &guess);
        
        if (guess > r ){
            printf("Guess is higher\n");
        }
        else if (guess < r){
            printf("Guess is lower\n");
        }
        gu_c+=1;

    }while(guess != r);
    printf("Thats correct and the no of tries are : %d", gu_c);
}