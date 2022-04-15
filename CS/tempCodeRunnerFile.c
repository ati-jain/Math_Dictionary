#include <stdio.h>
int main()
{
    int x[4][3];
    printf("%d\n%d\n%d", x, x + 1, *(x + 2) + 3);
    return 0;
}