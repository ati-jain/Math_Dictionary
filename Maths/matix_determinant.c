#include <stdio.h>
#include <conio.h>

int det(int a, int b[a][a])
{
    int val;
    if (a > 1)
    {
        //finidng the cofactor matrix temp
        int temp[a - 1][a - 1];
        val = 0;
        for (int k = 0; k < a; k++)
        {

            for (int i = 0; i < a - 1; i++)
            {
                for (int j = 0; j < a; j++)
                {
                    if (j < k)
                        temp[i][j] = b[i + 1][j];
                    if (j > k)
                        temp[i][j - 1] = b[i + 1][j];
                }
            }
            // finding the determinant value
            if (k % 2 == 0)
            {
                val = val + (b[0][k] * det(a - 1, temp));
            }
            if (k % 2 == 1)
            {
                val = val - (b[0][k] * det(a - 1, temp));
            }
        }
    }
    if (a == 1)
        val = b[0][0];

    return val;
}
int main()
{
    int order;
    det :
    printf("Determinant Calculator\n\nEnter the order of matrix : ");
    scanf("%d", &order);
    //defining a matrix
    int matrix[order][order];
    //getting the matrix
    printf("Enter Matrix : \n");
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //printing th matrix
    printf("The Matrix is : \n");

    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n");
    }
    printf("Determinant : %d", det(order, matrix));
    rep :
    printf("\n\nPress Enter to continue.\nPress Esc to exit.\n");
    char c;
    c = getch();
    if (c == (char)13)
    {
        goto det;
    }
    else if (c != (char)27)
    {
        printf("Enter a valid input\n");
        goto rep;
    }
    return 0;
}