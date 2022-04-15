#include <conio.h>
#include <stdio.h>
int main()
{
    int a;
    a = 3, 4, printf("The value : "),scanf("%d",&a);//diffrent statements seperated by comma
    printf("The value of a is %d\n", a);
    a = printf("The value\n");
    printf("The value of a is %d\n", a);
    a = (1,3,4);//last value will be assigned to x means x is 4
    printf("The value of a is %d",a);
    getch();
    return 0;
}