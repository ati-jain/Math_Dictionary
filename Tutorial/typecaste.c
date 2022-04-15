#include <stdio.h>
int main()
{
    char c;
again:
    printf("Hit Enter\n");
    scanf("%c", &c);
    if (c == (char)10)
        printf("Ok");
    else
        goto again;
    return 0;
}
