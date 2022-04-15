//Name : Atishay Jian
//Roll No. : 20CS30008
#include <stdio.h>
#include <string.h>
void filterString(char c[])
{
    int i, j;
    for (int i = 0; i < strlen(c); i++)
    {
        if (!((c[i] >= '0' && c[i] <= '9') || (c[i] >= 'a' && c[i] <= 'f') || (c[i] >= 'A' && c[i] <= 'f')))
        // if c[i] is not in the hex range then remove it
        {
            for (j = i; j < strlen(c); j++)
            {
                c[j] = c[j + 1];
            }
            i--;
        }
        else if (c[i] >= 'a' && c[i] <= 'f')
        // converting lower case to upper case
        {
            c[i] = c[i] + 'A' - 'a';
        }
    }
    printf("\nFiltered String : %s", c);
}
void hex2bin(char c[])
{
    int bin[40];
    int j, i, temp;
    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] > '9')
        //if c[i] is an alphabet
        {
            temp = c[i] - 'A' + 10;
            for (j = 3; j >= 0; j--)
            {
                bin[(4 * i) + j] = temp % 2;
                temp = temp / 2;
            }
        }
        else
        {
            temp = c[i] - '0';
            for (j = 3; j >= 0; j--)
            {
                bin[(4 * i) + j] = temp % 2;
                temp = temp / 2;
            }
        }
    }
    printf("\nBinary Equivalent : ");
    // printing the bin
    for (i = 0; i < strlen(c) * 4; i++)
    {
        printf("%d", bin[i]);
    }
}
int main()
{
    char hexNum[10], i = -1;
    printf("Enter a string (of length less than 10) : ");
    scanf("%s", hexNum);
    //if length is greater than 10 then repeat
    while (strlen(hexNum) > 9)
    {
        printf("Enter again : ");
        scanf("%s", hexNum);
    }
    // verifying the final string
    printf("Entered String : %s", hexNum);
    filterString(hexNum);
    hex2bin(hexNum);
    return 0;
}