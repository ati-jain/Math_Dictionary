//Roll No.: 20CS30008
//Name: Atishay Jain
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    float r, as, ac;
    printf("Enter the amount : ");
    scanf("%d", &a);
    printf("Enter time period (in years) : ");
    scanf("%d", &b);
    printf("Enter the rate of interest : ");
    scanf("%f", &r);
    as = a + ((a * r * b) / 100);
    ac = a * pow(1 + (r / 100), b);
    printf("Amount assuming simple interst : %f\n", as);
    printf("Amount assuming compund interst : %f", ac);
    return 0;
}