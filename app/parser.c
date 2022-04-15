#include <stdio.h>
#include <string.h>
void parser(char c[30])
{
    int i, x = 0, y = 0, z = 0;
    for (i = 0; i < 30; i++)
    {
        if (c[i] == '<')
            x++;
        if (x == 2)
            goto end;
        if (c[i] == '>')
            y++;
        if (x == 1 && y == 1 && c[i] != '>')
        {
            if (c[i] != ' ')
                z++;
            if (z > 0)
                printf("%c", c[i]);
        }
    }
end:
    if (z != 0 && c[i - 1] == ' ')
    {
        for (int j = 1; c[i - j] == ' '; j++)
        {
            printf("\b");
        }
    }
}
int main()
{
    char par[30];
    gets(par);
    puts(par);
    printf("start");
    parser(par);
    printf("end");
    return 0;
}
//<ij>   n dfiji findsfoL   <dfiL>