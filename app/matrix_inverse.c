#include <stdio.h>
int main()
{
    int n, i, j, k, l;
    printf("Enter the order of matrix : ");
    scanf("%d", &n);
    double m[n][n], in[n][n];

    //setting the identity matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                in[i][j] = 1;
            else
                in[i][j] = 0;
        }
    }

    printf("Enter the matrix \nPut space between two elements and press Enter to end row\n");
    //scanning the m matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        l = i;
        while (m[l][i] == 0) //if digonal element = 0 then interchange with other row
        {
            l++;
            if (l == n)
            {
                printf("The matrix is not invertible.");
                return 1;
            }
        }
        if (l != i)
        {
            //interchanging of rows
            for (j = 0; j < n; j++)
            {
                m[i][j] = m[i][j] + m[l][j];
                m[i][j] = m[i][j] - m[l][j];
                m[i][j] = m[i][j] - m[l][j];
                in[i][j] = in[i][j] + in[l][j];
                in[i][j] = in[i][j] - in[l][j];
                in[i][j] = in[i][j] - in[l][j];
            }
        }
        //row operation in the matrices
        for (k = 0; k < i; k++)
        {
            for (j = n - 1; j >= 0; j--)
            {
                in[k][j] = in[k][j] - ((m[k][i] / m[i][i]) * in[i][j]);
            }
            for (j = n - 1; j >= i; j--)
            {
                m[k][j] = m[k][j] - ((m[k][i] / m[i][i]) * m[i][j]);
            }
        }
        for (k = i + 1; k < n; k++)
        {
            for (j = n - 1; j >= 0; j--)
            {
                in[k][j] = in[k][j] - ((m[k][i] / m[i][i]) * in[i][j]);
            }
            for (j = n - 1; j >= i; j--)
            {
                m[k][j] = m[k][j] - ((m[k][i] / m[i][i]) * m[i][j]);
            }
        }
    }

    //making the diagonal elements 1
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            in[i][j] = in[i][j] / m[i][i];
        }
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf\t", in[i][j]);
        }
        printf("\n");
    }
    return 0;
}