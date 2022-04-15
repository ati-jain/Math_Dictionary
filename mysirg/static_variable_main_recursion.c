#include <stdio.h>
void main()
{
    static int x; //initalise with zero
    if (x-- > -4)
    {
        printf("%d", x);
        main();
    }
}