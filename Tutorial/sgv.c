#include <stdio.h>
int f(int n)
{
    if (n % 2 == 1)
        return 0;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    return 1 + f(sum);
}
int main()
{
    int x = f(4480);
    printf("%d",x);
    return 0;
}