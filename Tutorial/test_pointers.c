#include<stdio.h>
int main()
{
    //int x;
    int *d;
    //d = &x;
    printf("%d\n",*d);
    //the program will end here wheather d is NULL or not
    //but it will work if if we declare int x and point d to x
    printf("%d",d);
}
