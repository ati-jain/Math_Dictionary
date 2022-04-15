#include <stdio.h>
int main()
{
    int a;
    printf("%d %d %d %d", ++a, a++, ++a, ++a);
    printf("\n");
    printf("%d", a);
    return 0;
}