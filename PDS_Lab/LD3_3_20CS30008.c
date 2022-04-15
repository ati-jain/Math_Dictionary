//Name : Atishay Jain
//Roll No. : 20CS30008

#include <stdio.h>
int main()
{
    int a, large = 0, slarge = 0;
    char c;
    while (1)
    {
        printf("Enter number : ");
        while (c != 10)
        {
            scanf("%d", &a);
            scanf("%c", &c);
            if (a < 0) //for termination
                break;
            else if (a > large)
            //the entered number is the largest then it will take the place of largest and the currently largest number will become second largest
            {
                slarge = large;
                large = a;
            }
            else if (a > slarge && a < large)
                //if the entered number is smaller than the largest but larger than the second largest , then this will become the second largest
                slarge = a;
        }
        if (a < 0)
            break;
        printf("Largest number : %d\n", large);
        if (slarge > 0)
            printf("Second Largest Number : %d\n", slarge);
        else
            printf("Second Largest Number : Not yet entered\n");
        c = 32; //setting a different value to c from 10
    }
    return 0;
}