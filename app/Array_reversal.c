#include<stdio.h>
int main()
{
    int ar[10],i;
    char c;
    for (i = 0; i < 10; i++)
    {
        scanf("%c",&c);
        if(c==(char)10)
        goto print;
        ar[i]=(int)c-48;
    }
    print :
    for (int j = 0; j < i; j++)
    {
        printf("%d",ar[i-j-1]);
    }
    
    return 0;
}