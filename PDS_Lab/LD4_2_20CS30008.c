#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, i, temp, interchange = 0;
    printf("Enter a number (less than 30) : ");
    scanf("%d", &n);
    int arr[n]; // declaring the array of size n only
    srand(time(NULL));
    printf("Random Numbers : \n");
    for (i = 0; i < n; i++)
    {
        arr[i] = (rand() % 21) + 10; //generating a random number of the required range
        printf("%d\n", arr[i]);
    }
    for (i = 0; i < n; i += 2)
    {
        if (arr[i] > arr[i + 1]) //condition for interchange
        {
            temp = arr[i];       //storing the arr[i] in a temp variable
            arr[i] = arr[i + 1]; //interchanging the numbers
            arr[i + 1] = temp;
            interchange++; //counting the number of interchanges
        }
    }
    printf("Interchanged : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Number of intercahanges : %d", interchange);
    return 0;
}