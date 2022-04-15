#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("Prime Factorisation \n%d =", a);
    for (int i = 2; i < a; i++)
    // no need to check for i to be prime once we divide a / i then later a / (non prime) will not be zero
    {
        while (a % i == 0)
        {
            printf(" %d *", i);
            a = a / i;
        }
    }
    printf(" %d", a);
    getch();
    return 0;
}