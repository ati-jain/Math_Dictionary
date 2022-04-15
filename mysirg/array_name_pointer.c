#include <stdio.h>
void fun1(int *p)
{
    p++;
    printf("%d\t", *(p + 2));
}
void fun2(int b[]) //here int b[] is same as int *b
{
    b++; //this will not give error as b is a pointer simply
    printf("%d", b[2]);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    //a++; //this will give error because a is a constant
    fun1(a);
    fun2(a);
    return 0;
}