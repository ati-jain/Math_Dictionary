#include <stdio.h>
int main()
{
    int a=23;
    int* pointer = &a;
    int *null = NULL ;
    printf ("a=%d\n",a);
    printf ("address of a = pointer = %p\n",&a);
    printf ("address of pointer =%x\n", &pointer);
    printf ("a = *pointer = %d\n" , *pointer);
    printf ("address of a  = &a = %x\n",pointer);
    printf ("value of null pointer = %p\n",null);
    printf ("null points to  = %d\n",*null);
    return 0;
}
