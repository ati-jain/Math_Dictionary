#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5][5];                  //here all the elements will be present in contigous memory location as the size of each row and column is known
    printf("%d\n", sizeof(a));    //size of int **a
    printf("%d\n", sizeof(a[1])); //size of a row int *a[i]
    int m = 5, n = 5;
    int i, j;
    int **b = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++)
    {
        b[i] = (int *)malloc(sizeof(int) * n);
    }
    // Now b is a 2D Array as b[m][n]
    //
    //But the elements of a particular row only have contigous memory location
    //the adress of each row is not contigous as the size of row was not defined at the time of defining rows
    //
    printf("%d\n", sizeof(b)); //here it will print the size of pointer only because b is pointer ( to another pointer )
    printf("Address of array a elements :\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%-10d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Address of array b elements :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%-10d", &b[i][j]);
        }
        printf("\n");
    }
    free(b);
    return 0;
}