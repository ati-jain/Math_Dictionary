#include <stdio.h>
int main()
{
    int a;
    int b = (int)&a; //just an int
    //pointers properties will not be applicable
    int *c = &a;
    printf("%d\n", b);
    printf("%d\n", &a);
    printf("%d\n", c);
    printf("%d\n", a);
    *c = 70;
    printf("%d\n", a);
    // printf("%d\n", *b);
    //we can't dereferece an int
    return 0;
}