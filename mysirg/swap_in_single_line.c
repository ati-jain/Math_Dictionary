#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    a = a + b - (b = a);
    printf("%d and %d", a, b);
    return 0;
}