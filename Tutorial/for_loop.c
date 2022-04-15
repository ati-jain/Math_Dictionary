#include <stdio.h>
int main()
{
    int i = 0;
    for (;;)
    {
        i++;
        printf("%d\n", i);
        if (i > 5)
            break;
    }
    printf("Ended %d", i);
    return 0;
}