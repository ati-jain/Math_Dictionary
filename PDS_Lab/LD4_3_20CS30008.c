#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, comb = 0;
    printf("Enter a number (less than 30) : ");
    scanf("%d", &n);
    int arr[n]; //declaring array of required size
    srand(time(NULL));
    printf("Random Numbers \n");
    for (i = 0; i < n; i++)
    {
        arr[i] = (rand() % 31) + 10; //generating a random number of given range
        printf("%d\n", arr[i]);
    }
    printf("Array elements adding up to 60 :\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 60) //checking if three elements of the array adds upto 60
                {
                    printf("array[%d] + array[%d] + array[%d] = 60\n", i, j, k); //printing the indices and values
                    printf("Values : array[%d] = %d , array[%d] = %d , array[%d] = %d\n\n", i, arr[i], j, arr[j], k, arr[k]);
                    comb++;
                }
            }
        }
    }
    if (comb == 0) //if no such triplets are present
        printf("No such triplets");
    return 0;
}