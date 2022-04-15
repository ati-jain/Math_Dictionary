#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    unsigned long long n[t];
    unsigned long long m[t];
    unsigned long long ans[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%llu", &n[i]);
        scanf("%llu", &m[i]);
    }
    for (unsigned long long i = 0; i < t; i++)
    {
        ans[i] = 0;
        for (unsigned long long j = 1; j <= n[i]; j++)
        {
            ans[i] = ans[i] + pow(j, j);
        }
        ans[i] = ans[i] % m[i];
        printf("%llu\n", ans[i]);
    }

    return 0;
}