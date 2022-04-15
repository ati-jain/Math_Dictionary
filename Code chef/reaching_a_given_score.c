#include <stdio.h>
int main()
{
    int t;
    printf("Enter\n");
    scanf("%d",&t);
    int n[t];
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int m = 0; m < t; m++)
    {
        ans[m] = 0;
        for (int i = 0; i <= n[m] / 3; i++)
        {
            for (int j = 0; j <= n[m] / 5; j++)
            {
                for (int k = 0; k <= n[m] / 10; k++)
                {
                    if ((i * 3) + (j * 5) + (k * 10) == n[m])
                        ans[m]++;
                }
            }
        }
        printf("%d\n", ans[m]);
    }

    return 0;
}