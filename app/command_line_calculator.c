#include <stdio.h>
#include <string.h>
int atoi(char *s)
{
    int a = 0;
    for (int i = 0; i < strlen(s); i++)
        a = 10 * a + ((int)s[i] - 48);
    return a;
}
int main(int argc, char *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[3]);
    if (strcmp(argv[2], "*") == 0)
        printf("%d", x * y);
    else if (strcmp(argv[2], "-") == 0)
        printf("%d", x - y);
    else if (strcmp(argv[2], "+") == 0)
        printf("%d", x + y);
    else if (strcmp(argv[2], "/") == 0)
        printf("%f", (float)x / y);
    printf("\nThe input was %s", argv[2]);
    return 0;
}
