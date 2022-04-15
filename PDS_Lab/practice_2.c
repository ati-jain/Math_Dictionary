#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    //AGE
    // int a;
    // scanf("%d", &a);
    // int age[a], max = 0, min = 5000, sum = 0;
    // for (int i = 0; i < a; i++)
    // {
    //     scanf("%d", &age[i]);
    //     if (max < age[i])
    //         max = age[i];
    //     if (min > age[i])
    //         min = age[i];
    //     sum = sum + age[i];
    // }
    // printf("Maximum Age : %d\nMinimum Age : %d\nAverage age : %f", max, min, (float)sum / a);

    //POSITIVE AND NEGATIVE
    // int a, p = 0, n = 0;
    // while (1)
    // {
    //     scanf("%d", &a);
    //     if (a > 0)
    //         p++;
    //     else if (a < 0)
    //         n++;
    //     else
    //         break;
    // }
    // printf("Positive : %d\nNegative : %d", p, n);

    //DIGITS AND PALINDROME
    // int n, d = 0, c, temp = 0;
    // scanf("%d", &n);
    // if (n < 0)
    //     n = -n;
    // c = n;
    // while (n > 0)
    // {
    //     temp = (10 * temp) + (n % 10);
    //     d++;
    //     n = n / 10;
    // }
    // printf("Number of digits : %d\n", d);
    // if (temp == c)
    //     printf("%d is palindrome", c);
    // else
    //     printf("%d is not palindrome", c);

    //Decimal To Binary
    // double n, b = 0;
    // printf("Enter the number in decimal form : ");
    // scanf("%lf", &n);
    // int i = 0;
    // while (n >= pow(2, i++))
    // {
    // }
    // for (i = i - 2; n > 0 || i > -11; i--)
    // {
    //     if (n >= pow(2, i))
    //     {
    //         b = b + pow(10, i);
    //         n = n - pow(2, i);
    //     }
    // }
    // printf("Decimal to Binary : %0.10lf", b);

    //Random Numbers
    int a, b, c;
    printf("Enter the number of numbers you want : ");
    scanf("%d", &a);
    printf("Enter the range\n");
    scanf("%d %d", &b, &c);
    srand(time(NULL));
    for (int i = 0; i < a; i++)
    {
        printf("%d ) %d\n", i + 1, b + rand() % (b - c + 1));
    }
    return 0;
}