#include <string.h>
#include <stdio.h>
int main()
{
    char add[5][50], sub[5][50], c, res[50];
    printf("Enter the integers \n");
    int i = 0, j = 0;
    scanf("%s", add[i]);
    strrev(add[i]);
    i++;
scan:
    scanf(" %c", &c);
    if (c == '+')
    {
        scanf("%s", add[i]);
        strrev(add[i]);
        i++;
        goto scan;
    }
    else if (c == '-')
    {
        scanf("%s", sub[j]);
        strrev(sub[j]);
        j++;
        goto scan;
    }
    else if (c == '=')
    {
        int a = 0;
        for (int k = 0; k < 50; k++)
        {
            int n = 0, m = 0;
            for (int l = 0; l < i; l++)
            {
                if (k < strlen(add[l]))
                {
                    a = a + add[l][k] - '0';
                    n++;
                }
                if (k < strlen(sub[l]))
                {
                    a = a - sub[l][k] - '0';
                    m++;
                }
            }
            if (n > 0 || m > 0)
            {
                if (a < 0)
                    res[k] = (a % 10) + '0' + 10;
                else
                    res[k] = (a % 10) + '0';
                a = a / 10;//continue
            }
            else
            {
                res[k] = '\0';
                break;
            }
            for
        }
    }
    strrev(res);
    printf("Ans : %s", res);
    return 0;
}