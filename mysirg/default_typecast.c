#include <stdio.h>
int main()
{
    if (sizeof(char) > -1)
        printf("True\n");
    if (sizeof(int) > 2)
        printf("True 2\n");
    if (-2 > sizeof(int))//always int will be typecasted to unsigned int no matter weather it is on left or right side
        printf("True 3");
    return 0;
}