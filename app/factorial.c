#include <stdio.h>

int main()
{
    int n,i,f=1;
    printf("Factorial Calculator\n");
    printf("Enter the number : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        f=f*i;
    }
    printf("%d! = %d",n,f);
    return 0;
}
