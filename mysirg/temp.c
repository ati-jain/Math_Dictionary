#include <stdio.h>
void rev(int in[])
{
    int temp;
    for (int i = 0; i < 2; i++)
    {
        temp = in[i];
        in[i] = in[4 - i];
        in[4 - i] = temp;
    }
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    ++a;
    printf("%d", a[3]);
}