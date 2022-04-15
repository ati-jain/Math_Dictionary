#include <stdio.h>
int main()
{
    int a[3];
    0 [a] = 1; //[] (subscript opertor) is an operator which means a[b] = *(a + b)
    *(a + 1) = 2;
    a[2] = 3;
    printf("%d %d %d", a[0], 1 [a], *(a + 2));
    return 0;
}