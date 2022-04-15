#include <stdio.h>

int main()
{
    int A[3][3],i, j, count=1;

    /* Add values to the array, just 1, 2, 3,....9 */
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            A[i][j] = count++;
        }
    }

    /* print the array */
    printf("The array is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    getchar();
    /* print the addresses of the elements using & */
    printf("Array element addresses printed by &A[i][j]\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%u   ", &A[i][j]);
        }
        printf("\n");
    }

    getchar();
    /* What is A and *A? Both give you starting address of the array (address of A[0][0].*/
    printf("\n Starting address of A: A = %u   *A = %u\n\n", A, *A);

    /* What happens if we do A+i? You get the starting address of each row */
    printf("Starting addresses of each row:\n");
    printf("Printed by A+i \n");
    for(i=0; i<3; i++)
        printf("%u    ", A+i);
    printf("\n\n");

    /* *(A+i) also gives you the same thing!! */
    printf("Printed by *(A+i)\n");
    for(i=0; i<3; i++)
        printf("%u    ", *(A+i));
    printf("\n\n");

    /* so is A+i and *(A+i) same? Not exactly. Try printing the actual element addresses */

    getchar();
    /* Print the addresses of the elements using * */
    printf("Array element A[i][j]'s addresses printed by *(A+i) + j\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%u   ", *(A+i) + j);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("But trying to print the same way using A+i does not work \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%u   ", (A+i) + j);
        }
        printf("\n");
    }

    /* We will discuss the reason briefly in class. On a high level, think that
       A is sort of pointing to an array (the whole row), while *A is pointing to the
       first element of the row. So A + 1 jumps one whole row to point to the beginning
       of the next, i.e. the 2nd, row, and *(A+1) gives the address of the first element of the 2nd row.
       They print the same thing because the address of any row is the address of the first
       element of that row. But when we do + 1, they are not the same, one jumps one whole
       row (size of 3 ints), while the other jumps only the size of 1 int.
       This will become more clear when we do dynamic allocation of 2-d arrays */

    getchar();
    printf("\n\n");

    /* print the array elements using * */
    printf("Print the array elements using *(*(A+i) + j)\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%u   ", *(*(A+i) + j));
        }
        printf("\n");
    }
    printf("\n");

    /* finally, knowing they are contiguous, can print the addresses from starting address only.
       so address of first element is *A, 2nd is *A + 1, third is *A + 2,...Putting * around them
       gives you the actual elements of the arrau */
    printf("Print the addresses and elements as if it is a 1-d array starting from *A\n");
    for(i=0; i<3*3; i++)
        printf("%u  ", *A + i);
    printf("\n\n");
    for(i=0; i<3*3; i++)
        printf("%u  ", *(*A + i));
    printf("\n");


}
