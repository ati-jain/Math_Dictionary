#include <stdio.h>
int main()
{
    char a, b;
    scanf("%c", &a);
    fflush(stdin);
    scanf("%c", &b);
    printf("%c and %c", a, b);
    return 0;
}