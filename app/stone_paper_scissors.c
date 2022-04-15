#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int giverand()
{
    srand(time(NULL));
    return rand() % 3 + 1;
}
int main()
{
    char name[20], c;
    int times;
    printf("Stone Paper Scissors\n\n");
    printf("Press Enter to continue\nEnter 'R' to see the rules");
    scanf("%c", &c);
    if (c == 'r' || c == 'R')
    {
        printf("Rules : \nPress 1 for stone \nPress 2 for paper \nPress 3 for scissors\n");
        printf("Press Enter to continue\n");
        scanf("%c", &c);
        scanf("%c", &c);
    }
    printf("Enter Your Name : ");
    gets(name);
    if (name[0] == '\0')
        strcpy(name, "Player 1");
    printf("Name : %s\n", name);
    printf("How many times do you want to play : ");
    scanf("%d", &times);
    for (int i = 0; i < times; i++)
    {
        int turn;
        printf("Enter your input\n");
        rep:
        scanf("%d", &turn);
        if(turn<1 || turn >3)
        {
            printf("Invalid Input \nEnter Again");
            scanf("%c",&c);
            goto rep;
        }
        int cpu = giverand();
        if (turn == cpu)
            printf("\"Draw\"\n");
        else if (turn == 1 && cpu == 3)
            printf("\"You win\"\n");
        else if (turn == 2 && cpu == 1)
            printf("\"You win\"\n");
        else if (turn == 3 && cpu == 2)
            printf("\"You win\"\n");
        else
            printf("'You Lose'\n");
    }
    return 0;
}