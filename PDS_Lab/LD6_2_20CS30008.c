//Name : Atishay Jian
//Roll No. : 20CS30008
#include <stdio.h>
long unsigned int print_term(int n)
{
    if (n <= 2)
    //initial conditions
        return n;
    else
    //The defining property of series
        return ((3 * print_term(n - 1) * print_term(n - 2)) - (2 * print_term(n - 2) * print_term(n - 3)) + 1);
}
int main()
{
    int k;
    printf("Enter the number of terms : ");
    scanf("%d", &k);
    if (k == 0)
    //First Zero terms mean nothing
        printf("No term to print");
    else
        printf("First %d terms of the series : \n",k);
    // running the loop for k times 
    for (int i = 0; i < k; i++)
    {
        printf("%lu  ", print_term(i));
    }
    return 0;
}