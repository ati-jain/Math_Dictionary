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

void inspect(short a[3][3], char c, short check[8])
{
    short end = 0;
    for (short i = 0; i < 8; i++)
    {
        if (check[i] == 0)
        {
            short count1 = 0, count2 = 0;
            end++;
            if (i < 3)
            {
                for (short j = 0; j < 3; j++)
                {
                    if (a[i][j] == 1)
                        count1++;

                    else if (a[i][j] == 2)
                        count2++;
                }
            }

            else if (i < 6)
            {
                for (short j = 0; j < 3; j++)
                {
                    if (a[j][i - 3] == 1)
                        count1++;

                    else if (a[j][i - 3] == 2)
                        count2++;
                }
            }

            else if (i == 6)
            {
                for (short j = 0; j < 3; j++)
                {
                    if (a[j][j] == 1)
                        count1++;

                    else if (a[j][j] == 2)
                        count2++;
                }
            }

            else
            {
                for (short j = 0; j < 3; j++)
                {
                    if (a[j][2 - j] == 1)
                        count1++;

                    else if (a[j][2 - j] == 2)
                        count2++;
                }
            }

            if (count1 == 3 || count2 == 3)
            {
                gotoxy(2, 7);
                printf("\"%c\" wins", c);
                goto end;
            }

            else if (count1 != 0 && count2 != 0)
            {
                check[i] = -1;
                end--;
            }
        }
    }

    if (end == 0)
    {
        gotoxy(2, 7);
        printf("\"Its a tie!\"");
        goto end;
    }

    return;

end:
    while (getch() != 13)
        ;
    exit(0);
}

int main()
{
    char c;
    short x = 0, y = 0, turn = 0, a[3][3] = {0}, check[8] = {0};
    printf("Play Tic Tac Toe : \nInstructions : \ni)Use arrow key to move the cursor\nii)Use 0 and * key to mark your maove\niii)Press any key to continue");
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
    gotoxy(1, 1);

    while (1)
    {
        c = getch();
        switch (c)
        {
        case 0:
            break;

        case 72:
            if (y > 0)
            {
                y--;
                gotoxy((x * 4) + 1, (y * 2) + 1);
            }
            break;

        case 80:
            if (y < 2)
            {
                y++;
                gotoxy((x * 4) + 1, (y * 2) + 1);
            }
            break;

        case 77:
            if (x < 2)
            {
                x++;
                gotoxy((x * 4) + 1, (y * 2) + 1);
            }
            break;

        case 75:
            if (x > 0)
            {
                x--;
                gotoxy((x * 4) + 1, (y * 2) + 1);
            }
            break;

        case 48:
            if (a[x][y] == 0 && (turn == 1 || turn == 0))
            {
                printf("0");
                gotoxy((x * 4) + 1, (y * 2) + 1);
                a[x][y] = 1;
                inspect(a, c, check);
                turn = 2;
            }
            break;

        case 42:
            if (a[x][y] == 0 && (turn == 2 || turn == 0))
            {
                printf("*");
                gotoxy((x * 4) + 1, (y * 2) + 1);
                a[x][y] = 2;
                inspect(a, c, check);
                turn = 1;
            }
            break;

        default:
            break;
        }
    }

    return 0;
}