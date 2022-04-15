#include <stdio.h>
int main()
{
    int a = 78;
    void *p;
    p = &a;
    printf("The size of void pointer is %d\n",sizeof(p));
    printf("%d\n", *(int*)p);
    float b = 7.90;
    p=&b;
    printf("%f\n", *(float*)p);
    int *ptr = NULL;
    printf("%p\n",ptr);
    printf("The size of null poiter is %d\n",sizeof(ptr));
    // printf("%d",*ptr); will give error
    printf("END");
    return 0;
}