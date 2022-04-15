#include <stdio.h>
#include <math.h>
#define pi 3.14159
float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}
float area(int x1, int y1, int x2, int y2, float (*p)(int, int, int, int))
{
    return pi * (p(x1, y1, x2, y2)) * (p(x1, y1, x2, y2));
}
int main()
{
    printf("Enter\n");
    int x1, y1, x2, y2;
    float (*ptr)(int, int, int, int);
    ptr = distance;
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    printf("%f", area(x1, y1, x2, y2, distance));
    return 0;
}