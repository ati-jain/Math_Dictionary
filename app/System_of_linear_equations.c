#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n;
    float **a, *ans;
    float temp;
    printf("Enter the number of equations : ");
    scanf("%d", &n);

    a = (float **)malloc(sizeof(float *) * n);
    for (int i = 0; i < n; i++)
    {
        a[i] = (float *)malloc(sizeof(float) * (n + 1));
    }
    ans = (float *)malloc(sizeof(float) * n);

    printf("Enter the augmented matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i][i] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                temp = a[j][i] / a[i][i];
                for (int k = i; k < n + 1; k++)
                {
                    a[j][k] = a[j][k] - (temp * a[i][k]);
                }
            }
        }

        else
        {
            int check = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j][i] != 0)
                {
                    for (int k = 0; k < n + 1; k++)
                    {
                        temp = a[j][k];
                        a[j][k] = a[i][k];
                        a[i][k] = temp;
                    }
                    check = 1;
                    i--;
                    break;
                }
            }
            if (check == 0)
            {
                printf("No Unique Solution exists!\n");
                getch();
                exit(0);
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        temp = a[i][n];
        for (int j = i + 1; j < n; j++)
        {
            temp = temp - a[i][j] * ans[j];
        }
        ans[i] = temp / a[i][i];
    }

    printf("The solutions of the given system of equation is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("x%d : %f\n", i + 1, ans[i]);
    }

    return 0;
}