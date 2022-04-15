#include <stdio.h>
typedef unsigned long ul;
int main()
{
    typedef char *ptr; //will be treated as char* ptr
    ptr p;             // so p is a pointer
    printf("%d\n", sizeof(p));
    ul l = 52, d = 225, h = 222288;
    printf("%lu\n%lu\n%lu", l, d, h);
    return 0;
}