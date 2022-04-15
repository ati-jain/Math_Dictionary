#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
// void create(char **sptr)
// {
//     int i;
//     char temp[50];

//     printf("Enter 10 words :\n");
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d) ", i + 1);
//         scanf("%s", temp);
//         sptr[i] = (char *)malloc(sizeof(char) * (strlen(temp) + 1));
//         strcpy(sptr[i], temp);
//     }

//     printf("\nThe entered strings are :\n");
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d) ", i + 1);
//         printf("%s\n", sptr[i]);
//     }
// }

// void lengthStat(char **sptr)
// {
//     int i;
//     int one_two = 0;
//     int three_five = 0;
//     int larger_five = 0;

//     for (i = 0; i < 10; i++)
//     {
//         switch (strlen(sptr[i]))
//         {
//         case 1:
//         case 2:
//             one_two++;
//             break;

//         case 3:
//         case 4:
//         case 5:
//             three_five++;
//             break;

//         default:
//             larger_five++;
//             break;
//         }
//     }

//     printf("Number of words of length 1 - 2 : %d\n", one_two);
//     printf("Number of words of length 3 - 5 : %d\n", three_five);
//     printf("Number of words of length larger than 5 : %d\n", larger_five);
// }

// void letterStat(char **sptr)
// {
//     int index1, index2;

//     int a = 0;
//     int e = 0;
//     int i = 0;
//     int o = 0;
//     int u = 0;

//     for (index1 = 0; index1 < 10; index1++)
//     {
//         for (index2 = 0; sptr[index1][index2] != '\0'; index2++)
//         {
//             switch (sptr[index1][index2])
//             {
//             case 'a':
//                 a++;
//                 break;

//             case 'e':
//                 e++;
//                 break;

//             case 'i':
//                 i++;
//                 break;

//             case 'o':
//                 o++;
//                 break;

//             case 'u':
//                 u++;
//                 break;
//             }
//         }
//     }

//     printf("Number of vowels :\n");
//     printf("a : %d\n", a);
//     printf("e : %d\n", e);
//     printf("i : %d\n", i);
//     printf("o : %d\n", o);
//     printf("u : %d\n", u);
// }

// void removeDuplicate(char **sptr)
// {
//     int i, j, k;
//     int len = 10;

//     for (i = 0; i < len; i++)
//     {
//         for (j = i + 1; j < len; j++)
//         {
//             if (strcmp(sptr[i], sptr[j]) == 0)
//             {
//                 len--;

//                 for (k = j; k < len; k++)
//                 {
//                     strcpy(sptr[k], sptr[k + 1]);
//                 }

//                 free(sptr[len]);

//                 j--;
//             }
//         }
//     }

//     realloc(sptr, sizeof(char *) * len);

//     printf("The words after removing duplicates are :\n");
//     for (i = 0; i < len; i++)
//     {
//         printf("%d) %s\n", i + 1, sptr[i]);
//     }
// }

// int main()
// {
//     int i;
//     char **sptr;

//     sptr = (char **)malloc(sizeof(char *) * 10);

//     create(sptr);

//     lengthStat(sptr);

//     letterStat(sptr);

//     removeDuplicate(sptr);

//     return 0;
// }
//
// 2nd ---------------------------------
//
void findMinMax(int **p, int m, int n)
{
    int i, j;
    int maxi = 0, mini = 0, maxj = 0, minj = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (p[i][j] < p[mini][minj])
            {
                mini = i;
                minj = j;
            }

            if (p[i][j] > p[maxi][maxj])
            {
                maxi = i;
                maxj = j;
            }
        }
    }

    printf("Largest Element : %d at %d,%d position\n", p[maxi][maxj], maxi, maxj);
    printf("Smallest Element : %d at %d,%d position.\n", p[mini][minj], mini, minj);
}

int main()
{
    int **p;
    int m, n;
    int i, j;

    srand(time(NULL));

    printf("Enter number of rows : ");
    scanf("%d", &m);
    while (m < 1)
    {
        printf("Invalid Input!\nEnter again : ");
        scanf("%d", &m);
    }

    printf("Enter number of columns : ");
    scanf("%d", &n);
    while (n < 1)
    {
        printf("Invalid Input!\nEnter again : ");
        scanf("%d", &n);
    }

    p = (int **)malloc(sizeof(int *) * m);
    for (i = 0; i < m; i++)
    {
        p[i] = (int *)malloc(sizeof(int) * n);
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            p[i][j] = rand() % 101;
            printf("%-5d", p[i][j]);
        }
        printf("\n");
    }

    findMinMax(p, m, n);
}