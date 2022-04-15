#include <stdio.h>
int main()
{
    int i = 4;
    (++i)++;
    return 0;
}
//In C, prefix and postfix operators need integer-value to perform an operation and return r-value. The expression (++i)++ when executed increments the value of variable i(i is a integer-value) and returns r-value. The compiler generates the error(integer-value required) when it tries to post-increment the value of a r-value.