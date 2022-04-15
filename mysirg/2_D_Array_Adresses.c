#include <stdio.h>
int main()
{
    int x[4][3];
    printf("%d\n%d\n%d\n%d", x, *x, x + 1, *(x + 2) + 3);
    printf("\n%d",&x[3][0]);
    return 0;
}