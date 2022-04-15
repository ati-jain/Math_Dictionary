#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <unistd.h> //for sleep() function
#include <windows.h>

int main()
{
    int hour = 0, minute = 0, second = 0;
    while (1)
    {
        //clear output screen
        system("cls");

        //print time in HH : MM : SS format
        printf("%02d : %02d : %02d ", hour, minute, second);

        //clear output buffer in gcc
        // fflush(stdout);

        //increase second
        second++;

        //update hour, minute and second
        if (second == 60)
        {
            minute += 1;
            second = 0;
        }
        if (minute == 60)
        {
            hour += 1;
            minute = 0;
        }
        if (hour == 24)
        {
            hour = 0;
            minute = 0;
            second = 0;
        }
        sleep(1); //wait till 1 second
    }

    return 0;
}