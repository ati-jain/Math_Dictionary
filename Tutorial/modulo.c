#include <stdio.h>
int main()
{
    printf("%d\n", 5 % 2);
    printf("%d\n", -5 % 2);
    printf("%d\n", -5 % -2);
    printf("%d\n", 5 % -2);
    // sign of the numerator only will decide the sign of return int
    printf("%f\n", -5 % 2); // it returns int so %f will give 0
    return 0;
}