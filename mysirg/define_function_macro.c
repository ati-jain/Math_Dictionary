#include <stdio.h>
#define fun(a, b) a + b
int main()
{
    printf("%d", fun(5, 4) / fun(2, 1)); //fun(5,4) will not return 20 but it will put 5 + 4 there
    // and then precedence rule will follow
    return 0;
}