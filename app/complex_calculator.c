#include <stdio.h>
#include <math.h>
#define pi 3.141592
int main()
{
    float in, an, re = (float)0, im = (float)0;
    int i = 0;
    char c;
    printf("Comlex Calculator\n");
    printf("Enter the complex numbers\n");
    for (int i = 0; 1; i++)
    {
        scanf("%f", &in);
        scanf("%c", &c);
        if (c == '(')
        {
            scanf("%f", &an);
            re = re + (in * cos((pi * an) / 180));
            im = im + (in * sin((pi * an) / 180));
            scanf("%c", &c);
        }
        else if (c == 'i')
        {
            im = im + in;
            scanf("%c", &c);
            if (c == (char)10)
                goto end;
        }
        else
            re = re + in;
        if (c == (char)10)
            goto end;
    }
end:
    printf("The equivalent complex number is : %0.4f + %0.4fi", re, im);
    if (re >= 0 && im >= 0)
        printf("\n= %0.4f(%0.4f%c)", sqrt(re * re + im * im), (180 * atan((float)im / re)) / pi, (char)248);
    else if (re < 0 && im >= 0)
        printf("\n= %0.4f(%0.4f%c)", sqrt(re * re + im * im), 180 + ((180 * atan((float)im / re)) / pi), (char)248);
    else if (re < 0 && im < 0)
        printf("\n= %0.4f(%0.4f%c)", sqrt(re * re + im * im), ((180 * atan((float)im / re)) / pi) - 180, (char)248);
    else
        printf("\n= %0.4f(%0.4f%c)", sqrt(re * re + im * im), (180 * atan((float)im / re)) / pi, (char)248);
        printf("\nPress any key to continue");
        scanf("%c",&c);
    return 0;
}