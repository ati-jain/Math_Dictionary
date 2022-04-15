#include <stdio.h>
int nCr(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    return nCr(n - 1, r) + nCr(n - 1, r - 1);
}
int main()
{
    int n, r;
    do
    {
        printf("Enter n and r resp :\n");
        scanf("%d %d", &n, &r);
    } while (n < r || n > 20);
    printf("%dC%d = %d", n, r, nCr(n, r));
    return 0;
}