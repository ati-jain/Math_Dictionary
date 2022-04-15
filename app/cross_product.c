#include <stdio.h>

void cross(int a[],int b[])
{
    printf("A X B is ");
    // printf("%di + %dj + %dk",a[1]*b[2] - b[1]*a[2],-a[0]*b[2] + b[0]*a[2],a[0]*b[1] - b[0]*a[1]);
    printf("%di",a[1]*b[2] - b[1]*a[2]);
    if(-a[0]*b[2] + b[0]*a[2] < 0)
    printf("%dj",-a[0]*b[2] + b[0]*a[2]);
    else
    printf(" +%dj",-a[0]*b[2] + b[0]*a[2]);
    if(a[0]*b[1] - b[0]*a[1]<0)
    printf(" %dk",a[0]*b[1] - b[0]*a[1]);
    else
    printf(" +%dk",a[0]*b[1] - b[0]*a[1]);

}
int main()
{
    int A[3] = {0, 0, 0}, B[3] = {0, 0, 0};
    int a;
    char c;
    crs :
    printf("Enter vector A : (as xi + yj + zk) : ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        scanf("%c", &c);
        switch (c)
        {
        case 'i':
            A[0] += a;
            break;
        case 'j':
            A[1] += a;
            break;
        case 'k':
            A[2] += a;
            break;
        }
    }
    printf("Enter vector B : (as xi + yj + zk) : ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        scanf("%c", &c);
        switch (c)
        {
        case 'i':
            B[0] += a;
            break;
        case 'j':
            B[1] += a;
            break;
        case 'k':
            B[2] += a;
            break;
        }
    }

print:
    printf("A = %di+%dj+%dk\n", A[0], A[1], A[2]);
    printf("B = %di+%dj+%dk\n", B[0], B[1], B[2]);
    cross(A,B);
    rep :
    printf("\n\n\nPress Enter to continue.\nPress Esc to exit.\n");
    c = getch();
    if (c == (char)13)
    {
        goto crs;
    }
    else if (c != (char)27)
    {
        printf("Enter a valid input\n");
        goto rep;
    }
    return 0;
}