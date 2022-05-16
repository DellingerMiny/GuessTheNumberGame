#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int number, guess, nguess=1;
    srand(time(0)); 
    number = rand()%100 + 1;// Genrate a random nyum beetwin 1 to 100
   // printf("The Number is %d\n", number);
    //random num program end

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Lower Number please\n");
        }
        else if (guess<number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You Guessed in %d Attamed\n", nguess);
        }
        
        nguess++;
    } while(guess!=number);

    return 0;
}