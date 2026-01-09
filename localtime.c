#include <stdio.h>
#include <time.h>


int main()
{
    time_t now = time(NULL);

    struct tm* currenttime;
    currenttime = localtime(&now);
    printf("%02d : %02d : %02d\n", currenttime->tm_hour, currenttime->tm_min, currenttime->tm_sec);
    



    return 0;
}