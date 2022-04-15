#include <stdio.h>
int main()
{
    int a[10] = {11, 3, 10, 12, 6, 9, 6, 4, 4, 13};
    int b[15];
    for (int i = 0; i < 15; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        b[a[i]]++;
    }
    for (int i = 0; i < 15; i++)
    {
        while (b[i] > 0)
        {
            printf("%d ", i);
            b[i]--;
        }
    }

    return 0;
}