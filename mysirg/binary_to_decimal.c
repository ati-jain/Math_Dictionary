#include <stdio.h>
int main()
{
    int a, b = 0, c, i = 0;
    printf("Enter a number in binary form : ");
    scanf("%d", &a);// string can also be used to input
    // on string we can start from left to right easily and b = b*2 + s[i](in int form)
    while (a > 0)
    {
        c = 1;
        for (int j = 0; j < i; j++)
        {
            c = c * 2;
        }
        b = b + (c * (a % 10));
        i++;
        a = a / 10;
    }
    printf("In decimal form, a = %d", b);
    return 0;
}