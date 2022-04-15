#include <stdio.h>
void fun1(int *p)
{
    *p++; //will dereference it and increase p to p+1
    // not same as (*p)++
}
void fun2(int *p)
{
    ++*p; //will increase the value of *p i.e x
    // not same as *++p
    //*++p means dereferencing p+1;
}
int main()
{
    int x = 5;
    fun1(&x);
    printf("fun1 result : %d\n", x);
    fun2(&x);
    printf("fun2 result : %d", x);
    return 0;
}