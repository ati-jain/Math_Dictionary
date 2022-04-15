#include <stdio.h>

int term_rec(int n)
{
    switch (n)
    {
    case 1:
        return 0;
        break;
    case 2:
        return 1;
        break;
    default:
        return (term_rec(n-1) + term_rec(n-2));
        break;
    }
}
int term_ite(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
    
    // if (n == 1)
    //     return 0;
    // else
    // {
    //     for (int i = 0; i < n / 2 - 1; i++)
    //     {
    //         a = a + b;
    //         b = a + b;
    //     }
    //     if (n % 2 == 0)
    //         return b;
    //     if (n % 2 == 1)
    //         return a + b;
    // }
}
int main()
{
    int in;
    char c;
find:
    printf("Enter the number of term you want : ");
    scanf("%d", &in);
    printf("Using Iterative approach : %dth term = %d\n\nUsing Recursive Approach ; %dth term = %d\n\n", in, term_ite(in),in,term_rec(in));
    printf("Enter Q to quit\nEnter any other key to continue \n");
    scanf(" %c", &c);
    switch (c)
    {
    case 'q':
        printf("Quitting ...");
        break;

    case 'Q':
        printf("Quitting ...");
        break;

    default:
        goto find;
    }
    return 0;
}
