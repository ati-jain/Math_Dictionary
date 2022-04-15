#include<stdio.h>
int fuc()
{
    static int stc = 6;
    stc ++;
    return stc;
}
int main()
{
    fuc();
    fuc();
    fuc();
    fuc();
    printf("%d",fuc());
    // printf("%d",stc); will show error because str is not declared in int main()
    return 0;
}
