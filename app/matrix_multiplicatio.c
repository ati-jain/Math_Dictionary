#include <stdio.h>
int main()
{
    printf("XXX~~~ MATRIX MULTIPLIER ~~~XXX\n");
    printf("M1 X M2\n");
    int m1r, m1c, m2c;
    printf("Enter the number of rows in M1 : ");
    scanf("%d", &m1r);
    printf("Enter the number of columns in M1 : ");
    scanf("%d", &m1c);
    printf("Enter the number of columns in M2 : ");
    scanf("%d", &m2c);
    printf("Enter the elements of mtrix M1 \n");
    int m1[m1r][m1c], m2[m1c][m2c], m[m1r][m2c];
    for (int i = 0; i < m1r; i++)
    {
        for (int j = 0; j < m1c; j++)
        {
            printf("Enter the value of A(%d,%d) : " , i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the elements of mtrix M2 \n");
    for (int i = 0; i < m1c; i++)
    {
        for (int j = 0; j < m2c; j++)
        {
            printf("Enter the value of A(%d,%d) : ", i+1, j+1);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("The matrix M1 is \n");
    for (int i = 0; i < m1r; i++)
    {
        for (int j = 0; j < m1c; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
    printf("The matrix M2 is \n");
    for (int i = 0; i < m1c; i++)
    {
        for (int j = 0; j < m2c; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m1r; i++)
    {
        for (int k = 0; k < m2c; k++)
        {
            m[i][k] = 0;
            for (int j = 0; j < m1c; j++)
            {
                m[i][k] = m[i][k] + m1[i][j] * m2[j][k];
            }
        }
    }
    printf("The multiplicaton of M1 and M2 is :\n");
    for (int i = 0; i < m1r; i++)
    {
        for (int j = 0; j < m2c; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    char a;
    printf("Press Enter to continue ");
    scanf("%c",&a);
    return 0;
}