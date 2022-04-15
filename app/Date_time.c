#include <stdio.h>
// pre defined macros
int main()
{
    printf("The date today is : %s\n", __DATE__);
    printf("The time now is : %s\n", __TIME__);
    printf("The file name is : %s\n", __FILE__);
    printf("The line number is : %d\n", __LINE__);
    return 0;
}