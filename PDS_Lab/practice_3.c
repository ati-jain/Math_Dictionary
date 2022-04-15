#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    // int a[20], sum = 0, sum2 = 0;
    // float avg, sd;
    // srand(time(NULL));
    // for (int i = 0; i < 20; i++)
    // {
    //     a[i] = rand() % 100 + 1;
    //     printf("%d\n", a[i]);
    //     sum = sum + a[i];
    //     sum2 = sum2 + (a[i] * a[i]);
    // }
    // avg = (float)sum / 20;
    // sd = sqrt(((float)sum2 / 20) - (avg * avg));
    // printf("Average : %0.2f\nStandard Deviation : %0.2f", avg, sd);
    // return 0;

    //Interchange
    // int a[20];
    // srand(time(NULL));
    // for (int i = 0; i < 20; i++)
    // {
    //     a[i] = rand() % 100 + 100;
    //     printf("%d\n", a[i]);
    // }
    // printf("Interchanged\n");
    // for (int i = 0; i < 20; i += 2)
    // {
    //     a[i] = a[i] + a[i + 1];
    //     a[i + 1] = a[i] - a[i + 1];
    //     a[i] = a[i] - a[i + 1];
    //     printf("%d\n%d\n", a[i], a[i + 1]);
    // }
    // return 0;

    //3rd
    // int a[20];
    // srand(time(NULL));
    // for (int i = 0; i < 20; i++)
    // {
    //     a[i] = rand() % 100 + 100;
    //     printf("%d\n", a[i]);
    // }
    // printf("Pairs\n");
    // for (int i = 0; i < 20; i++)
    // {
    //     for (int j = i + 1; j < 20; j++)
    //     {
    //         if (a[i] + a[j] <= 170 && a[i] + a[j] >= 160)
    //             printf("%d and %d\n", a[i], a[j]);
    //     }
    // }
    // return 0;

    //4th
    // char s[16];
    // printf("Enter the string : ");
    // scanf("%s", s);
    // for (int i = 0; s[i] != '\0'; i++)
    //     if (s[i] <= 'z' && s[i] >= 'a')
    //         s[i] = s[i] + 'A' - 'a';
    // printf("Lowercase : %s\n", s);
    // for (int i = 0; s[i] != '\0'; i++)
    //     if (s[i] <= 'Z' && s[i] >= 'A')
    //         s[i] = s[i] + 'a' - 'A';
    // printf("Uppercase : %s", s);
    // return 0;

    //5th
    char s[16], a[16], temp;
    int i;jj
    printf("Enter the first string : ");
    scanf("%s", s);
    printf("Enter the second string : ");
    scanf("%s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        for (int j = i; s[j] != '\0'; j++)
        {
            if (a[i] == s[j])
            {
                temp = s[i];
                s[i] = a[i];
                s[j] = temp;
            }
        }
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        if (s[i] == a[i])
            continue;
        else
            break;
    }
    if (a[i] == '\0' && s[i] == '\0')
        printf("anagram");
    else
        printf("not anagram");
    return 0;
}