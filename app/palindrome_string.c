#include <stdio.h>
#include <string.h>
int palindrome(char in[20])
{
    strlwr(in);
    int len = strlen(in);
    for (int i = 0; i < len; i++)
    {

        if (in[i] == in[len - 1 - i])
            ;
        else
            return 0;
    }
    return 1;
}
int main()
{
    char str[20];
    printf("String palindrome checker\n");
    printf("Enter the stirng : ");
    scanf("%s", &str);
    if (palindrome(str))
        printf("The entered string is palondrome\n");
    else
        printf("The entered string is not palondrome\n");
        printf("Press Enter to continue");
        scanf("%c",&str);
        scanf("%c",&str);
    return 0;
}