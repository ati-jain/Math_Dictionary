#include<stdio.h>
//change in the original array also
int func(int b[])
{
    b[2]=b[2]+1;
}
int main()
{
    int arr[]={1,2,4,5};
    int c = func (arr);
    printf("%d",arr[2]);
    return 0;
}