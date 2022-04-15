//Name : Atishay Jain
//Roll No. : 20CS30008
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findMinMax(int **, int, int); //prototype

int main()
{
    int **arr; //declaring pointer to a 2D array
    int rows, columns;
    int i, j;

    srand(time(NULL)); //giving different seed to the srand function each time

    printf("Enter number of rows : ");
    scanf("%d", &rows);
    while (rows <= 0)
    {
        printf("Invalid input!!!\nEnter again : ");
        scanf("%d", &rows);
    }

    arr = (int **)malloc(sizeof(int *) * rows); //Allocaitng space for an array of int *

    printf("Enter number of columns : ");
    scanf("%d", &columns);
    while (columns <= 0)
    {
        printf("Invalid input!!!\nEnter agian : ");
        scanf("%d", &columns);
    }

    for (i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * columns); //Allocating space for the 2D array
    }

    printf("\nThe array of random numbers is :\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            arr[i][j] = rand() % 101;  //filling the array with random numbers
            printf("%-5d", arr[i][j]); //printing the array
        }
        printf("\n"); //proper formatiing of the printed array
    }

    findMinMax(arr, rows, columns);

    return 0;
}

void findMinMax(int **A, int rows, int columns)
{
    int max = 0;                                //the lowest possible value of max
    int min = 100;                              //the highest possible value of min
    int rmin = 0, rmax = 0, cmin = 0, cmax = 0; //the positions of min max elements
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (max < A[i][j]) //if A[i][j] is larger than current max value
            {
                max = A[i][j];
                rmax = i;
                cmax = j;
            }

            if (min > A[i][j]) //if A[i][j] is smaller than the current min value
            {
                min = A[i][j];
                rmin = i;
                cmin = j;
            }
        }
    }

    //printing the information
    printf("\nThe largest element present in the array is : %d\n", max);
    printf("It is present at row no. : %d and column no. : %d\n", rmax, cmax);

    printf("\nThe smallest element present in the array is : %d\n", min);
    printf("It is present at row no. : %d and column no. : %d\n", rmin, cmin);
}