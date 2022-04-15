#include <stdio.h>
#include <string.h>
int main()
{
    char c[10];
    int i;
    i = 0;
    for (i = 0; i < 20; i++)
    {
        printf("%d %u %c\n", i, &c[i], c[i]);
    }
    scanf("%s", c);
    c[10] = '\0';
    printf("%s %d\n", c, sizeof(c));
    i = 0;
    for (i = 0; i < 30; i++)
    {
        printf("%d %u %c\n", i, &c[i], c[i]);
    }
    printf("%s %d\n", c, sizeof(c));
    printf("%s %d\n", c, sizeof(c));
    printf("%s %d\n", c, sizeof(c));
    printf("%c\n", c[10]);// why c[10] is not '\0'
}