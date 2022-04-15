#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertion_sort(int *a, int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            int temp = a[i];
            for (j = i - 1; a[j] > temp && j >= 0; j--)
            {
                a[j + 1] = a[j];
            }
            a[j + 1] = temp;
        }
    }
}

int main()
{
    srand(time(NULL));
    int arr[10];
    int i;
    printf("The unsorted array is :\n");
    for (i = 0; i < 10; i++)
    {
        arr[i] = rand() % 20;
        printf("%d  ", arr[i]);
    }
    insertion_sort(arr, 10);
    printf("\nThe sorted array is :\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}