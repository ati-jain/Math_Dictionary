#include <stdio.h>
#include <windows.h>
#include <conio.h>
void gotoxy(int x, int y)
{
    COORD p;
    p.X = x;
    p.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}
int main()
{
    char c;
    int l = 0, x = 1, y = 1, turn = 1, a[9] = {0}, check1, check2;
    printf("Play Tic Tac Toe : \nInstructions : \ni)Use arrow key to move the cursor\nii)Use 0 and * key to mark your maove\niii)First turn is of \"0\"\niv)Press any key to continue");
    getch();
    system("cls");
    printf("Tic Tac Toe :\n");
    gotoxy(0, 1);
    printf("   %c   %c  ", 179, 179);
    gotoxy(0, 2);
    printf("%c%c%c%c%c%c%c%c%c%c%c", 196, 196, 196, 197, 196, 196, 196, 197, 196, 196, 196);
    gotoxy(0, 3);
    printf("   %c   %c  ", 179, 179);
    gotoxy(0, 4);
    printf("%c%c%c%c%c%c%c%c%c%c%c", 196, 196, 196, 197, 196, 196, 196, 197, 196, 196, 196);
    gotoxy(0, 5);
    printf("   %c   %c  ", 179, 179);
    gotoxy(x, y);
    while (1)
    {
        c = getch();
        if (c == 0 || c == 224)
            c = getch();
        else if (c == 48 && turn == 1 && a[l] == 0)
        {
            printf("0");
            turn = 2;
            a[l] = 1;
            gotoxy(x, y);
        }
        else if (c == 42 && turn == 2 && a[l] == 0)
        {
            printf("*");
            turn = 1;
            a[l] = 2;
            gotoxy(x, y);
        }
        else if (c == 75 && l % 3 > 0)
        {
            l--;
            x = x - 4;
            gotoxy(x, y);
        }
        else if (c == 77 && l % 3 != 2)
        {
            l++;
            x = x + 4;
            gotoxy(x, y);
        }
        else if (c == 72 && l / 3 > 0)
        {
            l = l - 3;
            y = y - 2;
            gotoxy(x, y);
        }
        else if (c == 80 && l / 3 < 2)
        {
            l = l + 3;
            y = y + 2;
            gotoxy(x, y);
        }
        else if (c == 13)
            break;
        for (int i = 0; i < 3; i++)
        {
            check1 = check2 = 0;
            for (int j = 3 * i; j < 3 * (i + 1); j++)
            {
                if (a[j] == 1)
                    check1++;
                else if (a[j] == 2)
                    check2++;
                else
                    break;
            }
            if (check1 == 3)
            {
                gotoxy(2, 7);
                printf("\"0 wins\"");
                getch();
                return 0;
            }
            else if (check2 == 3)
            {
                gotoxy(2, 7);
                printf("\"* wins\"");
                getch();
                return 0;
            }
            check1 = check2 = 0;
            for (int j = i; j < i + 7; j = j + 3)
            {
                if (a[j] == 1)
                    check1++;
                else if (a[j] == 2)
                    check2++;
                else
                    break;
            }
            if (check1 == 3)
            {
                gotoxy(2, 7);
                printf("\"0 wins\"");
                getch();
                return 0;
            }
            else if (check2 == 3)
            {
                gotoxy(2, 7);
                printf("\"* wins\"");
                getch();
                return 0;
            }
        }
        check1 = check2 = 0;
        for (int i = 0; i < 9; i = i + 4)
        {
            if (a[i] == 1)
                check1++;
            else if (a[i] == 2)
                check2++;
            else
                break;
        }
        if (check1 == 3)
        {
            gotoxy(2, 7);
            printf("\"0 wins\"");
            getch();
            return 0;
        }
        else if (check2 == 3)
        {
            gotoxy(2, 7);
            printf("\"* wins\"");
            getch();
            return 0;
        }
        check1 = check2 = 0;
        for (int i = 2; i < 7; i = i + 2)
        {
            if (a[i] == 1)
                check1++;
            else if (a[i] == 2)
                check2++;
            else
                break;
        }
        if (check1 == 3)
        {
            gotoxy(2, 7);
            printf("\"0 wins\"");
            getch();
            return 0;
        }
        else if (check2 == 3)
        {
            gotoxy(2, 7);
            printf("\"* wins\"");
            getch();
            return 0;
        }
    }
    getch();
    return 0;
}