#include <stdio.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int x, int y)
{
    COORD p;
    p.X = x;
    p.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}
int main()
{
    int x, y;
    printf("Enter X : ");
    scanf("%d", &x);
    printf("Enter Y : ");
    scanf("%d", &y);
    gotoxy(x, y);
    printf("Hello");
    getch();
    return 0;
}