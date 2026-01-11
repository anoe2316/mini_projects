#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getrandomNumber(int i)
{
    int r = rand() % (i * 9) + 1;
    return r;
}
void checkAnswer(int number,int answer,int *count)
{
    
    if(answer == number){
        printf("Good job!\n");
            (*count)++;
        }
        else{
        printf("You are wrong.\n");
            }
           
}
int main()
{
    srand(time(NULL));
    int count = 0;
    for(int i = 1;i <= 5;i++)
    {
        int first = getrandomNumber(i);
        int second = getrandomNumber(i);
        
        printf("%d x %d = ", first, second);
        int number = first * second;
        int answer = 0;
        
        scanf("%d", &answer);
        checkAnswer(number,answer,&count);
        
                
        
    }printf("Your got %d correct.", count);


    



    return 0;
}