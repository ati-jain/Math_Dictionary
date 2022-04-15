//Name - Atishay Jain
//Roll NO. - 20CS30008

#include <stdio.h>
int main()
{
    int s, n;
    int i, j;  //declaring rows and column in the result
    int d = 1; //declaring the number to be printed at a particular space

    printf("Enter scale factor(1 to 8) : ");
    scanf("%d", &s);
    while (!(s <= 8 && s >= 1)) //checking the range of s
    {
        printf("Invalid s value entered\n");
        printf("Enter scale factor(1 to 8) again : ");
        scanf("%d", &s);
    }

    printf("Enter number of lines(1 to 10) : ");
    scanf("%d", &n);
    while (!(n <= 10 && n >= 1)) //checking the range of n
    {
        printf("Invalid n value entered\n");
        printf("Enter number of lines(1 to 10) again : ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= 2 + s; j++)
        {
            printf("%d", d);
            //changing the vlaue of d for next place
            if (d < s + 3)
                d++;
            else
                d = 1;
        }
        printf("\n"); // to end a line
    }

    return 0;
}