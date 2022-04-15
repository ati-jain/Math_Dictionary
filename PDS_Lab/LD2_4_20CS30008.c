//Roll No.: 20CS30008
//Name: Atishay Jain
#include <stdio.h>
#include <math.h>
int main()
{
    float a1, b1, r1, a2, b2, r2, dis, diff;
    printf("Enter the value of a1 and b1\n");
    scanf("%f %f", &a1, &b1);
    printf("Enter the value of r1 : ");
    scanf("%f", &r1);
    printf("Enter the value of a2 and b2\n");
    scanf("%f %f", &a2, &b2);
    printf("Enter the value of r1 : ");
    scanf("%f", &r2);
    dis = sqrt(((a1 - a2) * (a1 - a2)) + ((b1 - b2) * (b1 - b2)));
    printf("The distance btween the two centres is %f \n", dis);
    if (r1 > r2)
        diff = r1 - r2;
    else
        diff = r2 - r1;
    if (dis == 0 && diff == 0)
        printf("Infinite point of intersection");
    else if (dis == diff || dis == r1 + r2)
        printf("1 point of intersection");
    else if (dis < r1 + r2 && dis > diff)
        printf("2 points of intersection");
    else
        printf("No point of intersection");
    return 0;
}