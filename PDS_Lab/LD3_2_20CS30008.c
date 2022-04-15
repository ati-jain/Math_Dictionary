//Name : Atishay Jain
//Roll No. : 20CS30008

#include <stdio.h>
int main()
{
    int a, i;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Multiplicatioin Table of %d\n", a);
    for (i = 1; i <= 10; i++)
        printf("%d X %d = %d\n", a, i, a * i);//printing each line of the table
    return 0;
}