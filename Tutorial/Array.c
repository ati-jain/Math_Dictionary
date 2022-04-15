#include <stdio.h>

int main()
{
    int ary[][4] = {{2, 5, 4, 3, 6, 7, 8}, {2, 5, 7, 9}};
    for (int i = 0, j = 0; i < 7, j < 10; j++, i++)
    {
        printf("%d\n", ary[i][j]);
    }

    return 0;
}
