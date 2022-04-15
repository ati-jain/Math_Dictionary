#include <stdio.h>
int main()
{
    int a = 12;
    printf("%d", a++ + ++a); // not an error but not fixed for every compiler
    return 0;
}