#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main()
{
    int second, minute, hour;
    second = minute = hour = 0;

    while(1)
    {
        
        printf("\r%02d : %02d : %02d", hour, minute, second);
        fflush(stdout);
        
        sleep(1);
        second++;
        minute += second / 60;
        second %= 60;

        hour += minute / 60;
        minute %= 60;

        hour %= 24;
        
    }

    

    return 0;
}