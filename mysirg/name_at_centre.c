#include <stdio.h>
void gotoxy(int x, int y)
{
    for (int i = 0; i < y; i++)
        printf("\n");
    for (int i = 0; i < x; i++)
        printf(" ");
}
int main()
{
    gotoxy(50, 10);
    printf("Atishay Jain");
    getchar();
    return 0;
}