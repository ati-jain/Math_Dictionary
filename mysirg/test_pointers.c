#include<stdio.h>
int main()
{
    int a[]={10,5,21,51,3,2,19};
    int *p;
    p = a;//or p = &a[0];
    printf("%d\n",sizeof(a));
    printf("%d\n",*p);
    printf("%d\n",p);
    p = p + *(p+4);//p+4 willl point to 3 hence *(p+4) will give 3,,So after operation p will point to 51
    printf("%d\n",p);
    printf("%d",*p);
    return 0;
}