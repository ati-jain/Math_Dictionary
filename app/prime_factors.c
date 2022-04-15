#include <stdio.h>
int isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int numberOfPrime(int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (isprime(j) == 1)
            i++;
    }
}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int n = numberOfPrime(a);
    printf("%d", n);
    return 0;
}