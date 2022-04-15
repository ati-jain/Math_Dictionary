#include <stdio.h>
int main()
{
    void *p;
    int x = 255;
    p = &x;
    printf("%d\n", *(char *)p); //if we write *p only then it will show error
    printf("%d", *(int *)p);
    return 0;
}