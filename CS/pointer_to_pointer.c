#include <stdio.h>
int main()
{
    int *p[5]; // p is an array of five int pointers
    //it is stored in stack
    // p++; // so we cant do this;
    int **q; // q is a pointer to a pointer , it is a variabe;
    printf("%d\n", q);
    q++; //we can do this
    printf("%d", q);
    return 0;
}