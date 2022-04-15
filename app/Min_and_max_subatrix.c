//Name : Atishay Jain
//Roll No. : 20CS30008
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));  //giving a different seed to rand every time
    int m, n;           //decalring m and n
    int matrix[20][20]; //declaring the matrix of maximum size
    int i, j, k, l;     //declaring some indexes
    int row[3], col[3]; //declaring the variables to store extreme sum of elements and temp sum of elements
    int maxrow[3], maxcol[3];
    int minrow[3], mincol[3];
    int temp, max = 0, min = 90; //variables to store the coordiante of starting elemnet of max submatrix
    printf("Enter the value of m : ");       //asking for m
    scanf("%d", &m);                         //scanning m
    while (m >= 20 || m <= 2)                //checking for the range of m
    {
        printf("Enter m again : ");
        scanf("%d", &m);
    }
    printf("Enter the value of n : "); //asking for n
    scanf("%d", &n);                   //scanning n
    while (n >= 20 || n <= 2)          //checking for the range of n
    {
        printf("Enter n again : ");
        scanf("%d", &n);
    }
    printf("The Random Matrix is : \n");

    for (i = 0; i < m; i++) //running over rows
    {
        for (j = 0; j < n; j++) //running over column
        {
            matrix[i][j] = rand() % 11;   //assigning a random value between 0 and 10
            printf("%d\t", matrix[i][j]); //printing the value
        }
        printf("\n"); //going to next row
    }

    for (row[0] = 0; row[0] < m - 2; row[0]++)
    {
        for (row[1] = row[0] + 1; row[1] < m - 1; row[1]++)
        {
            for (row[2] = row[1] + 1; row[2] < m; row[2]++)
            {
                for (col[0] = 0; col[0] < n - 2; col[0]++)
                {
                    for (col[1] = col[0] + 1; col[1] < n - 1; col[1]++)
                    {
                        for (col[2] = col[1] + 1; col[2] < n; col[2]++)
                        {                            
                            temp= 0;
                            for (i = 0; i < 3; i++)
                            {
                                for (j = 0; j < 3; j++)
                                {
                                    temp += matrix[row[i]][col[j]];
                                }
                            }
                            if (temp < min)
                            {
                                min = temp;
                                for (i = 0; i < 3; i++)
                                {
                                    minrow[i] = row[i];
                                    mincol[i] = col[i];
                                }
                            }
                            if (temp > max)
                            {
                                max = temp;
                                for (i = 0; i < 3; i++)
                                {
                                    maxrow[i] = row[i];
                                    maxcol[i] = col[i];
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    printf("Maximum : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[maxrow[i]][maxcol[j]]);
        }
        printf("\n");
    }

    printf("Minimum : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[minrow[i]][mincol[j]]);
        }
        printf("\n");
    }

    return 0;
}