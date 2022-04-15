#include <stdio.h>
int main()
{
    int in;
    float i = 0;
    printf("Enter a Number : ");
    scanf("%d", &in);
    while (1)
    {
        i = i + 0.0001;
        if (2 * i * i - 0.0002 * i + 0.00000001 < 2 * in && 2 * i * i + 0.00000001 + 0.0002 * i > 2 * in)
        {
            printf("%0.4f\n", i);
            break;
        }
    }
    int x = 0;
    float ans, j;
    ans = j = 0;
    printf("Enter a Number : ");
    scanf("%d", &in);
    i=in;
    while (x<10000)
    {
        if (ans * ans < in)
        {
            j = ans;
            ans = (ans + i) / 2;
        }
        if (ans * ans > in)
        {
            i = ans;
            ans = ans / 2;
        }
        x++;
    }
    printf("%f", ans);

    return 0;
}