#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int r = rand() % 100 + 1;

    printf("%d\n", r);
    int count = 0;
    int guess = 0;
    printf("Guess a number between 1 to 100. You can try 10 times.\n\n");
    while(count < 10 && guess != r)
    {
        printf("Enter a Guess : ");
        scanf("%d", &guess);
        count++;
        if(guess > r){
            printf("Guess lower. You have %d times chance.\n", 10 - count);
            
        }else if(guess < r){
            printf("Guess higher. You have %d times chance.\n", 10 - count);
            
        }
        
    }
    if(guess == r) 
    {
        printf("You guessed the number. You have won the game! Congratulations!");
       
    }
    if(count >= 10 && guess != r)
    {
        printf("It exceeds 10 times.You have failed the game.Sorry!\n");
    }


    return 0;
}


