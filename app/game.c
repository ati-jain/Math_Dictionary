#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
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
    printf("Join the numbers in order\nUse Arrow keys to move the pointer\nYou can cross your path\nPress any key to start");
    getch();
    gotoxy(0, 0);
    system("cls"); // to clear screen
    srand(time(NULL));
    int a[10], b[10], i;
    for (i = 0; i < 10; i++)
    {
        a[i] = (rand() % 100) + 1;
        b[i] = rand() % 25;
        for (int j = 0; j < i; j++)
        {
            if (a[j] == a[i] && b[j] == b[i])
            {
                i--;
                break;
            }
        }
        gotoxy(a[i], b[i]);
        printf("%d", i + 1);
    }
    int x = 0, y = 0;
    i = 0;
    gotoxy(x, y);
    printf("*");
    char c, l;
    while (c != 13 && i < 10)
    {
        c = getch();
        if (c == 0 || c == 224)
            c = getch();
        else if (c == 75)
        {
            gotoxy(x, y);
            if (l == 80)
                printf("%c", 217);
            else if (l == 72)
                printf("%c", 191);
            else
                printf("%c", 196);
            l = c;
            if (x > 0)
                x--;
            for (int j = i; j < 10; j++)
            {
                if (x == a[j] && y == b[j])
                {
                    if (j == i)
                    {
                        i++;
                        break;
                    }
                    else
                    {
                        goto end;
                    }
                }
            }
            gotoxy(x, y);
            printf("*");
        }
        else if (c == 77)
        {
            gotoxy(x, y);
            if (l == 80)
                printf("%c", 192);
            else if (l == 72)
                printf("%c", 218);
            else
                printf("%c", 196);
            l = c;
            if (x <= 100)
                x++;
            for (int j = i; j < 10; j++)
            {
                if (x == a[j] && y == b[j])
                {
                    if (j == i)
                    {
                        i++;
                        break;
                    }
                    else
                    {
                        goto end;
                    }
                }
            }
            gotoxy(x, y);
            printf("*");
        }
        else if (c == 72)
        {
            gotoxy(x, y);
            if (l == 75)
                printf("%c", 192);
            else if (l == 77)
                printf("%c", 217);
            else
                printf("%c", 179);
            l = c;
            if (y > 0)
                y--;
            for (int j = i; j < 10; j++)
            {
                if (x == a[j] && y == b[j])
                {
                    if (j == i)
                    {
                        i++;
                        break;
                    }
                    else
                    {
                        goto end;
                    }
                }
            }
            gotoxy(x, y);
            printf("*");
        }
        else if (c == 80)
        {
            gotoxy(x, y);
            if (l == 77)
                printf("%c", 191);
            else if (l == 75)
                printf("%c", 218);
            else
                printf("%c", 179);
            l = c;
            if (y < 25)
                y++;
            for (int j = i; j < 10; j++)
            {
                if (x == a[j] && y == b[j])
                {
                    if (j == i)
                    {
                        i++;
                        break;
                    }
                    else
                    {
                        goto end;
                    }
                }
            }
            gotoxy(x, y);
            printf("*");
        }
    }
end:
    if (i < 10)
        printf("YOU LOOSE");
    else
        printf("YOU WIN");
    scanf("%c", &x);
    return 0;
}