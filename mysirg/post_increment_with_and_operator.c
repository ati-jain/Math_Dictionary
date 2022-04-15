#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 0, y = 0;
    if (x++ && y++) //first assign then increase but once left hand side is false it will not go to the right side
        printf("if x : %d and y : %d", x, y);
    else
        printf("else x : %d and y : %d", x, y);
    printf("\n");
    if (x++ || y++) //as left side becomes true it will still not go to the right side
        printf("if x : %d and y : %d", x, y);
    else
        printf("else x : %d and y : %d", x, y);
    printf("\n");
    x = 0;
    y = 0;
    if (++x && y++)
        printf("if x : %d and y : %d", x, y);
    else
        printf("else x : %d and y : %d", x, y);
    getch();
    return 0;
}