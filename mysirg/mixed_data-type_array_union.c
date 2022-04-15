#include <stdio.h>

typedef union
{
    int i;
    char c;
    float f;
    double d;
} mixed;

int main()
{
    mixed arr[10];
    arr[0].i = 5;
    arr[1].c = 'A';
    arr[2].f = 5.66;
    arr[3].d = 43.236;
    printf("%d %c %f %lf", arr[0].i, arr[1].c, arr[2].f, arr[3].d);
    return 0;
}