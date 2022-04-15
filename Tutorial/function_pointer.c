#include <stdio.h>
float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }

int main()
{
    float a, b;
    int o;
    float (*p[4])(float, float) = {add, sub, mul, div}; //array of function pointer
    printf("Enter the operation : 0 for add , 1 for sub , 2 for mul , 3 for div\n");
    scanf("%d", &o);
    printf("Enter the numbers : \n");
    scanf("%f %f", &a, &b);
    printf("%f", p[o](a, b));
}