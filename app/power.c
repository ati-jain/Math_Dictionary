#include<stdio.h>


int main()
{
    int a,b,c=1,i;
    printf("Enter a number (base) : ");
    scanf("%d",&a);
    printf("Enter a number (power) : ");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
        c=c*a;
    printf("%d^%d = %d",a,b,c);
}
