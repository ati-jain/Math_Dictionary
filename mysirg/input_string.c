#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char c, s[100], sen[100], sen2[100];
    scanf("%c", &c);
    scanf("%s", s);
    scanf(" %[^\n]%*c", sen); //will read until \n is entered but that \n will not be stored
    scanf("%[^\n]%*c", sen2);
    printf("Output\n");
    printf("%c\n%s\n%s\n~%s~", c, s, sen, sen2);
    printf("\nEnd");
    return 0;
}