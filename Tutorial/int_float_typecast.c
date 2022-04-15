#include <stdio.h>
int main()
{
    int a = 5;
    printf("\n1 : %f", a);
    printf("\n2 : %f", (float)a);
    printf("\n3 : %f", a);
    printf("\n3 : %d", a);
    float f = 8.7;
    printf("\n4 : %d", f);
    printf("\n5 : %d", (int)f);
    printf("\n6 : %d", f);
    a = f;
    printf("\n7 : %d", a);
    printf("\n8 : %f", a);
    printf("\n9 : %f", (float)a);
    a = 6;
    f = a;
    printf("\n10 : %f", f);
    return 0;
}