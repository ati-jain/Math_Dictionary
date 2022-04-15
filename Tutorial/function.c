#include <stdio.h>
//no argumnet no return function
void printstar()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        printf("*\n");
}
int main()
{
    printstar();
    return 0;
}