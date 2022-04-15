//Name - Atishay Jain
//Roll NO. - 20CS30008

#include <stdio.h>
int main()
{
    int x, y;
    int count = 0; //to count the number of pairs
    printf("Sum of digit preserving pairs -\n\n");

    for (x = 13; x <= 23; x++)
    {
        for (y = x + 1; y <= 23; y++) //comparing with the other numbers larger than x
        {
            int a, b;
            int sum = 0, suma = 0, sumb = 0;
            int sumsum = 0;
            a = x;
            b = y;
            sum = x + y;
            while (a > 0) //calculating sum of digits of a
            {
                suma = suma + a % 10;
                a = a / 10;
            }
            while (b > 0) //calculating sum of digits of b
            {
                sumb = sumb + b % 10;
                b = b / 10;
            }
            while (sum > 0) //calculating sum of digits of the sum a+b
            {
                sumsum = sumsum + sum % 10;
                sum = sum / 10;
            }
            if (suma + sumb == sumsum) //checking the condition
            {
                count++; //increasing the count
                printf("%d and %d equals %d\n", x, y, x + y);
            }
        }
    }

    printf("\nNumber of sum of digit preserving pairs = %d", count);
    return 0;
}