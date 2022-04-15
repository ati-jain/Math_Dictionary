#include <stdio.h>
int main()
{
    int q, k, n;
    printf("Enter the value of N : ");
    scanf("%d", &n);
    int N[n][2];
    for (int i = 0; i < n; i++)
    {
        // printf("Enter the value of S%d : ", i + 1);
        scanf("%d", &N[i][0]);
        // printf("Enter the value of E%d : ", i + 1);
        scanf("%d", &N[i][1]);
    }

    printf("Enter the value of Q : ");
    scanf("%d", &q);
    int t[q][20];
    for (int i = 0; i < q; i++)
    {
        // printf("Enter the value K : ");
        scanf("%d", &k);
        for (int j = 0; j < k; j++)
        {
            // printf("Enter the value of t : ");
            scanf("%d", &t[i][j]);
        }
    }
    // all inputs taken
    // now analise
    for (int i = 0; i < q; i++)
    {
        int ans = 0;
        for (int m = 0; m < n; m++)
        {
            for (int j = 0; j < k; j++)
            {

                if (t[i][j] <= N[m][1] && t[i][j] >= N[m][0])
                {
                    ans += 1;
                    goto next;
                }
            }
        next:
            ans = ans * 1;
        }
        printf("%d\n", ans);
    }
    printf("Press Enter to exit");
    scanf("%c", &q); //any one can be used
    scanf("%c", &q); //any one can be used

    return 0;
}