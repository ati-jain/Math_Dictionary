#include <stdio.h>
#include <string.h>
int main()
{
    char c[50], s[5];
    scanf("%s", c);
    strcpy(s, c);
    printf("%s\n", s);
    printf("%d\n", strlen(s));
    printf("%s\n", strrev(s));
    return 0;
}