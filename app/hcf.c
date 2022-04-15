// #include <stdio.h>
// int main()
// {
//     printf("HCF Calculator\n\n");
//     int a, b;
//     printf("Enter the first number : ");
//     scanf("%d", &a);
//     printf("Enter the second number : ");
//     scanf("%d", &b);
//     for (int i = 1; i <= a; i++)
//     {
//         if (a % i == 0)
//         {
//             for (int j = 1; j <= b; j++)
//             {
//                 if (b % j == 0 && a / i == b / j)
//                 {
//                     printf("The HCF of %d and %d is %d.\n", a, b, a / i);
//                     goto end;
//                 }
//             }
//         }
//     }
//     end :

//     return 0;
// }

//efiicient way
//Eucledian theorem

#include <stdio.h>
#include <conio.h>
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}
int main()
{
    printf("HCF Calculator\n");
lcm:
{
    int a, b;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d", &b);
    printf("%d\n", gcd(a, b));
}
rep:
    printf("Press Enter to continue.\nPress Esc to exit.\n");
    char c = getch();
    if (c == (char)13)
    {
        goto lcm;
    }
    else if (c != (char)27)
    {
        printf("Enter a valid input\n");
        goto rep;
    }
    return 0;
}