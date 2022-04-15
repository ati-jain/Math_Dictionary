#include <stdio.h>
int main()
{
    int p, q, r[15], s[15];
    // r[i] will be the remainder and s[i] will be the quotient
    int i = 0, j, k;
    printf("Enter p : ");
    scanf("%d", &p);
    printf("Enter q : ");
    scanf("%d", &q);
    printf("%d/%d = %d.", p, q, p / q);
    r[i] = 10 * (p % q);
    while (1)
    {
        s[i] = r[i] / q;
        r[i + 1] = 10 * (r[i] % q);
        i++;
        for (j = 0; j < i; j++) // if this loop fails every time then j will become equal to i and we have to repeat
        {
            if (r[i] == r[j]) // the point where repetition will occur
                break;
        }
        if (j != i) // check to repeat the while loop
            break;
    }
    for (k = 0; k < j; k++)
        printf("%d", s[k]);
    printf("(");
    for (k = j; k < i; k++)
    {
        printf("%d", s[k]);
    }
    printf(")");
    return 0;
}