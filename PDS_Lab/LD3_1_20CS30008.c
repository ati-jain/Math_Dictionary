//Name : Atishay Jain
//Roll No. : 20CS30008

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    while (a > 0)
    {
        switch (a % 10) //for converting the right most digit of the number to its word spelling
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        }
        a = a / 10; //This way we will go right to left , so automatically the digits will be displayed in reverse order
    }
    return 0;
}