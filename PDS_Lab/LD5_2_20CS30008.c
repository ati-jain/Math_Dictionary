//Name - Atishay Jain
//Roll NO. - 20CS30008

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int i;

    // a) part--------------------------------------------------------------------

    printf("\nFilling Random numbers in the array\n");
    int a1[10], a2[10], a3[10], a4[10];
    for (i = 0; i < 10; i++)
    {
        //assigning random numbers to arrays
        a1[i] = (rand() % 21) + 10;
        a2[i] = (rand() % 31) + 30;
        a3[i] = (rand() % 31) + 60;
        a4[i] = (rand() % 31) + 90;
    }
    printf("Contents of Arrays\n");
    printf("\n\nArray 1:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a1[i]);
    }
    printf("\n\nArray 2:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a2[i]);
    }
    printf("\n\nArray 3:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a3[i]);
    }
    printf("\n\nArray 4:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a4[i]);
    }

    // b) part -------------------------------------------------

    printf("\n\nInterspacing the contents of a1 and a2 in a5\n");
    int a5[20];
    for (i = 0; i < 10; i++)
    {
        //assigning alternate values
        a5[i * 2] = a1[i];
        a5[(i * 2) + 1] = a2[i];
    }
    printf("Content of Arrays\n");
    printf("\n\nArray 1:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a1[i]);
    }
    printf("\n\nArray 2:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a2[i]);
    }
    printf("\n\nArray 5:\n\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\t", a5[i]);
    }

    // c) part-----------------------------------------------------

    printf("\n\nInterspacing the contents of a3 and a4 in a6\n");
    int a6[20];
    for (i = 0; i < 10; i++)
    {
        a6[18 - (2 * i)] = a3[i]; //assingning alternate values from reverse
        a6[(i * 2) + 1] = a4[i];  //assigning alternate values
    }
    printf("Content of Arrays\n");
    printf("\n\nArray 3:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a3[i]);
    }
    printf("\n\nArray 4:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a4[i]);
    }
    printf("\n\nArray 6:\n\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\t", a6[i]);
    }

    // d) part-------------------------------------------------

    printf("\n\nInterspacing the contents of a5 and a6 in a7\n");
    int a7[40];
    for (i = 0; i < 20; i++)
    {
        a7[38 - (2 * i)] = a5[i]; //assingning alternate values from reverse
        a7[39 - (2 * i)] = a6[i]; //assingning alternate values from reverse
    }
    printf("Content of Arrays\n");
    printf("\n\nArray 5:\n\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\t", a5[i]);
    }
    printf("\n\nArray 6:\n\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\t", a6[i]);
    }
    printf("\n\nArray 7:\n\n");
    for (i = 0; i < 40; i++)
    {
        printf("%d\t", a7[i]);
    }

    return 0;
}