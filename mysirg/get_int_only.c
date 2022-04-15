#include <stdio.h>
#include <conio.h>
int get_int()
{
    char a;
    int n = 0;
    while (1)
    {
        a = getch();
        if (a <= 57 && a >= 48)
        {
            n = 10 * n + (a - 48);
            printf("%c", a);
        }
        else if (a == 13)
        {
            printf("0");
            return n;
        }
    }
}
int main()
{
    int a;
    int i = 0;
    printf("Enter the number : ");
    a = get_int();
    printf("\n%d", a);
    return 0;
}