#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter \n");
    int t;
    scanf("%d", &t);
    int *x[t];
    int *y[t];
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        y[i] = malloc((n + 1) * 4);
        y[i][1] = n;
        x[i] = malloc(n * 4);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
            scanf("%d", &y[i + 1][j]);
        }
    }
    
    return 0;
}