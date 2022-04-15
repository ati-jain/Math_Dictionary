#include<stdio.h>

int main()
{
    int n,m,i=0,a,b,c,d=0,e;
    printf("Enter a Number : ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    //calculate number of digits
    {
        n=n/2;
        i++;
    }
    for(c=0;c<i;c++)
    {
        e=1;
    for(a=c;a<i;a++)
      // for e = 2^(i-c)
      {  
          e=e*2;
      }   
        b=m%e;
    for(a=c;a<i-1;a++)
    //for b/2^(i-1-c)
    {
     b=b/2;
    }
     d=10*d + b;
    }
    printf("%d in Binary Form = \"%d\" ",m,d);
    return 0;
}
