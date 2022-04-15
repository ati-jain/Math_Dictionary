#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(sizeof(int) * 4);
    printf("p : %d\n", p); //value of p
    for (int i = 0; i < 4; i++)
    {
        p[i] = 1; //storing 1 in the first four elements
    }
    p = realloc(p, 5000);  //using large new size, so that p will point to new location
    printf("p : %d\n", p); //value of p
    for (int i = 0; i < 4; i++)
    {
        printf("%d  ", p[i]); //checking first four elements
    }
    return 0;
}