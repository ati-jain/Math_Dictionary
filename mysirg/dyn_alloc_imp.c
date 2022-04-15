#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[10] = {0}; //allocating space in stack
    int *q;
    int *p;
    p = (int *)malloc(sizeof(int) * 5); //allocate space in heap
    p++;
    // free(p); //we can't free it like this,we can free only full block together , so p should point to the base address of that block
    q = A;      //pointing to a memory block in stack
    q[0] = 100; //changing the value of the first element of the space pointed by q
    // free(A); //gave a warning
    // free(q); //this is pointing to a memory in in stack , we cant free
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", A[i]);
    }
    p--;
    free(p);
    printf("\nExit Successfully"); //to check that the program has reached here (program has not crashed)
    return 0;
}