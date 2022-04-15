#include <stdio.h>
#include <conio.h>
#include <string.h>
void getpass(char *b)
{
    char a;
    int i = 0;
    while (1)
    {
        a = getch();
        if (a == 13)
            break;
        else if (a == 8)
        {
            if (i != 0)
                i--;
            printf("\b");
        }
        else
        {
            b[i] = a;
            printf("*");
            i++;
        }
    }
    printf("**********");
}
int main()
{
    char a[20] = "Ati@07", b[20] = "\0";
    printf("Enter password : ");
    for (int i = 0; i < 3; i++)
    {
        getpass(b);
        if (strcmp(a, b))
        {
            printf("\nPassword is incorrect");
            printf("\nEnter again");
        }
        else
        {
            printf("\nWelcome");
            return 0;
        }
    }
}