//Name : Atishay Jain
//Roll No. : 20CS30008

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a, n, i;
    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
    //declaring 10 variables for the 10 range i.e, 0 - 9 ...
    srand(time(NULL)); // to give different random numbers each time
    printf("How many random numbers do you want : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        a = rand() % 101; // to get a random number between 0 to 100
        printf("%d\n", a);
        switch (a / 10) //to find out where will the number lie in 0 to 100
        {
        case 0:
            zero++;
            break;
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        case 7:
            seven++;
            break;
        case 8:
            eight++;
            break;
        case 9:
            nine++;
            break;
        case 10:
            nine++;
            break;
        }
    }
    printf("Percentage of random numbers :\n");
    //printing the percantage
    printf("0 - 9: %0.2f%%\n", (float)(zero * 100) / n);
    printf("10 - 19: %0.2f%%\n", (float)(one * 100) / n);
    printf("20 - 29: %0.2f%%\n", (float)(two * 100) / n);
    printf("30 - 39: %0.2f%%\n", (float)(three * 100) / n);
    printf("40 - 49: %0.2f%%\n", (float)(four * 100) / n);
    printf("50 - 59: %0.2f%%\n", (float)(five * 100) / n);
    printf("60 - 69: %0.2f%%\n", (float)(six * 100) / n);
    printf("70 - 79: %0.2f%%\n", (float)(seven * 100) / n);
    printf("80 - 89: %0.2f%%\n", (float)(eight * 100) / n);
    printf("90 - 100: %0.2f%%\n", (float)(nine * 100) / n);
    return 0;
}