#include <stdio.h>
// without calling goto label will print
int main()
{
    int i = 1;
label:
    printf("label");
    for (; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d and %d\n", i, j);
            if (i == 4 && j == 4)
                goto end;
        }
    }
end:


    return 0;
}