//Roll No.: 20CS30008
//Name: Atishay Jain
#include <stdio.h>
int main()
{
    int m, c, x, y;
    printf("Enter m : ");
    scanf("%d", &m);
    printf("Enter c : ");
    scanf("%d", &c);
    printf("Enter x and y\n");
    scanf("%d %d", &x, &y);
    if (y == ((m * x) + c))
        printf("Yes");
    else
        printf("No");
    return 0;
}