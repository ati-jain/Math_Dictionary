#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void sort(int *a);

void my_sort(int *a);

int main()
{
    srand(time(NULL));
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 10;
        printf("%d\t", a[i]);
    }

    sort(a); //will work perfectly for distinct numbers but with same numbers it may give wrong results.
    //check with {1,0,4,3,4,1,0,1,2,3}
    //here we are using loop over i to fix one element but it is possible that the same number uses two iteration
    //then some may not get in proper place
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nSorted Array : \n");
    my_sort(a);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}

void sort(int *a)
{
    int check;
    int index = 0;
    for (int i = 0; i < 10; i++)
    {
        check = index;
        for (int j = index + 1; j < 10; j++)
        {
            if (a[index] > a[j])
            {
                check++;
            }
        }

        if (check > index)
        {
            while (a[check] == a[index])
                check++;

            int temp = a[index];
            a[index] = a[check];
            a[check] = temp;
        }

        else
        {
            while (a[index] = a[index + 1])
                index++;
        }
    }
}

void my_sort(int *a)
{
    int min, temp;
    for (int i = 0; i < 10; i++)
    {
        min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (a[min] > a[j])
                min = j;
        }

        if (min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}