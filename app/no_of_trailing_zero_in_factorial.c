#include <stdio.h>
int trailingZeroes(int N)
    {
        int j=5;
        int ans=0;
        while(j<=N)
        {
            ans+= N/j;
            j=j*5;
        }
        return ans;
    }
int main()
{
    printf("Enter a nmber : ");
    int in;
    scanf("%d", &in);
    int fact = trailingZeroes(in);
    printf("The number of trailing zeroes in the factorial is %d", fact);
    return 0;
}