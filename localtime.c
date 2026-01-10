#include <stdio.h>
#include <time.h>


int main()
{
    time_t now = time(NULL);

    struct tm* currenttime;
    currenttime = localtime(&now);
    printf("%04d / %02d / %02d\n%02d : %02d : %02d\n",currenttime->tm_year+1900,currenttime->tm_mon+1,currenttime->tm_mday, currenttime->tm_hour, currenttime->tm_min, currenttime->tm_sec);
    



    return 0;
}