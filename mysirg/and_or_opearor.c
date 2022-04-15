#include <stdio.h>
int main()
{
    int x, y;
    x = y = 1;
    if (x++ && ++x || y--)
        printf("if x : %d y : %d", x, y);
    else
        printf("else x : %d y : %d", x, y);
    return 0;
}