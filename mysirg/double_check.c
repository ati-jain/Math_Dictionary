#include<stdio.h>
int main()
{
    int x = 5;//will proceed from left and false will mean 0 and true will mean 1!!!
    if(x>4>1)
    printf("True\n");
    if(x>4>0)
    printf("True 2\n");
    if(x>6<1)
    printf("True 3\n");
    else 
    printf("False\n");
    return 0;
}