#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the size of your name : ");
    int *ptr;
    ptr = (int *)malloc(8); //cna be done by declaring like ptr = malloc (8) ; only
    for (int i = 0; i < 2; i++)
        printf("%d ", ptr[i]);
    printf("\n");
    ptr = realloc(ptr, 12);
    for (int i = 0; i < 3; i++)
        printf("%d ", *(ptr + i));
    free(ptr);
    printf("\n");
    ptr = calloc(4, 4);
    //after freeing the memory the also no need to declare the int*ptr again//
    for (int i = 0; i < 4; i++)
        printf("%d ", ptr[i]);
    return 0;
}