//Name : Atishay Jain
//Roll No. : 20CS30008

#include <stdio.h>
int main()
{
    int a, b, c, i;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a <= 0)
        printf("Enter a valid term");
    else if (a == 1) //first term is simply 1, it can not be derived
        printf("Ist term = 1");
    else if (a == 2) //similarly second term is 2 by definition
        printf("2nd term = -1");
    else
    //nth term is given by (n-2)th - (n-1)th term
    {
        b = 1;
        c = -1;
        for (i = 3; i <= a; i = i + 2) //we are traversing 2 terms at a time
        {
            b = b - c;
            c = c - b;
        }
        if (a % 2 == 0)
            //if the number is even then  we should print c because we have are doing it that  way
            printf("%dth term = %d", a, c);
        else
            printf("%dth term = %d", a, b);
    }
    return 0;
}