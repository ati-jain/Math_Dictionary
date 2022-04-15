#include <stdio.h>
int main()
{
    for (int n = 1; n < 1000; n++)
    {
        int a = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
                a += i;
        }
        if (a == n)
            printf("%d is a Perfect number.\n", n);
    }
    return 0;
}