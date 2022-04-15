#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int u[n], p[n];
        for (int j = 0; j < n; j++)
        {
            p[j] = j + 1;
            scanf("%d", &u[j]);
        }
        for (int k = 1; k < n; k++)
        {
            if (u[k] != 0)
            {
                int a = p[k];
                for (int j = 0, l = k; j < u[k]; j++, l--)
                {
                    p[l] = p[l - 1];
                }
                p[k - u[k]] = a;
            }
        }
        for (int k = 1; k <= n; k++)
        {
            for (int j = 0; j < n; j++)
            {
                if (p[j] == k)
                {
                    printf("%d ", j + 1);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}