//Roll No.: 20CS30008
//Name: Atishay Jain
#include <stdio.h>
#include <math.h>
int main()
{
    int L, R;
    printf("Enter the value of L : ");
    scanf("%d", &L);
    printf("Enter the value of R : ");
    scanf("%d", &R);
    if ((sqrt(2) * R) == L)
        printf("SQINCIR");
    else if (L == 2 * R)
        printf("CIRINSQ");
    else
        printf("NONE");
    return 0;
}