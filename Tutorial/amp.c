//Program to remove duplicate elements from an array

#include <stdio.h>

void main()
{

    int i = 0, n, a[100], j = 0, k = 0;
    printf("How many elements do you want to enter? ");
    scanf("%d", &n);
    printf("Start entering the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {

            if (a[i] == a[j])
            {

                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                i--; //Ensuring that elements repeated more than twice are also removed; so for this i, we need to run the loop again
            }
        }
    }
    printf("Now there are %d elements after eliminating duplicates. The elements of the array after removing duplicate elements are:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d      ", a[i]);
    }
}
