#include <stdio.h>
int palindrome(int num)
{
    int rev = 0;
    unsigned int num2 = num;
    while (num2 > 0)
    {
        rev = (rev * 10) + num2 % 10;
        num2 = num2 / 10;
    }
    printf("The reversed number is : %d\n", rev);
    if (rev == num)
        return -2;//any number other than 0
    else
        return 0;
}
int main()
{
    unsigned int in;
    printf("Palindrome Number Check\n");
    printf("Enter the number : ");
    scanf("%u", &in);
    if (palindrome(in))
        printf("The entered number is palindrome");
    else
        printf("The entered number is not palindrome");
    printf("\nPress Enter to exit");
    scanf("%c", &in);
    scanf("%c", &in);
    return 0;
}