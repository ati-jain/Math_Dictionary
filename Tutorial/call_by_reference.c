#include <stdio.h>
//assinging the value of a+b and a-b to a and b and then printing them
void addass(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - 2 * (*y);
    return;
}
int main()
{
    int a = 12, b = 34;
    addass(&a, &b);
    printf("%d and %d", a, b);
    return 0;
}