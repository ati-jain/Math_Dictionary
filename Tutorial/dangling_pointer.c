#include <stdio.h>
#include <stdlib.h>
int *myfunc()
{
    int a;
    return &a;
}
int main()
{
    int *ptr = NULL;
    printf("%p\n", ptr);
    ptr = myfunc();
    printf("%p\n", ptr);
    int *ptr2 = NULL;
    printf("%p\n", ptr2);
    {
        int i = 4;
        ptr2 = &i;
    }
    printf("%p\n", ptr2);
    printf("%d\n", *ptr2);
    int * ptr3;
    int rand=2;
    ptr3 = &rand;
    free(ptr3);
    printf("%p\n",ptr3);
    printf("%d\n",*ptr3);
    return 0;
}