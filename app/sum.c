#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the number : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum = sum +n ;
    }
    printf("Sum of First %d Natural Number is : %d",n,sum);
    return 0;
}