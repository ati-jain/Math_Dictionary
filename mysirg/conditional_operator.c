#include <stdio.h>
int max(int a, int b)
{
    return a > b ? printf("6\n"): b;// \n is a single character
}
int main()
{
    int a = 6, b = 5;
    printf("The greater one is %d.", max(a, b));
    return 0;
}