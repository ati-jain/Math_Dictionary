// //Name : Atishay Jain
// //Roll No. : 20CS30008
// #include <stdio.h>
// #include <stdlib.h>

// int get_union(int *a, int *b, int *c)
// {
//     int i, j;
//     int n = 0;
//     for (i = 0; i < 20; i++)
//     {
//         c[n] = a[i];
//         n++;
//     }
//     for (i = 0; i < 20; i++)
//     {
//         for (j = 0; j < 20; j++)
//         {
//             if (b[i] == a[j])
//             {
//                 break;
//             }
//         }
//         if (j == 20)
//         {
//             c[n] = b[i];
//             n++;
//         }
//     }
//     return n;
// }

// int get_intersection(int *a, int *b, int *c)
// {
//     int i, j;
//     int n = 0;
//     for (i = 0; i < 20; i++)
//     {
//         for (j = 0; j < 20; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 c[n] = a[i];
//                 n++;
//             }
//         }
//     }
//     return n;
// }

// int main()
// {
//     int set1[20], set2[20], tmp[40];
//     int i, j;
//     int n;
//     int in;
//     for (i = 0; i < 20; i++)
//     {
//         set1[i] = (rand() % 21) + 10;
//         for (j = 0; j < i; j++)
//         {
//             if (set1[i] == set1[j])
//             {
//                 i--;
//                 break;
//             }
//         }
//     }
//     for (i = 0; i < 20; i++)
//     {
//         set2[i] = (rand() % 21) + 10;
//         for (j = 0; j < i; j++)
//         {
//             if (set2[i] == set2[j])
//             {
//                 i--;
//                 break;
//             }
//         }
//     }
//     printf("Elements of set1 : \n");
//     for (i = 0; i < 20; i++)
//     {
//         printf("%d  ", set1[i]);
//     }
//     printf("\nElements of set2 : \n");
//     for (i = 0; i < 20; i++)
//     {
//         printf("%d  ", set2[i]);
//     }
//     do
//     {
//         printf("\nEnter a number :\n");
//         printf("1 for seeing the union set\n");
//         printf("2 for seeing the intersection set\n");
//         printf("3 to end the program\n");
//         scanf("%d", &in);
//         switch (in)
//         {
//         case 1:
//             n = get_union(set1, set2, tmp);
//             printf("Union of set1 and set2 is :\n");
//             for (i = 0; i < n; i++)
//             {
//                 printf("%d  ", tmp[i]);
//             }
//             break;
//         case 2:
//             n = get_intersection(set1, set2, tmp);
//             printf("Intersection of set1 and set2 is :\n");
//             for (i = 0; i < n; i++)
//             {
//                 printf("%d  ", tmp[i]);
//             }
//             break;
//         case 3:
//             printf("Thnak You");
//             return 0;
//             break;
//         default:
//             printf("Invalid input !!!");
//             break;
//         }
//     } while (1);

//     return 0;
// }
//
//
//
//
//-----------------------------------------------------------------
//
//
//
// 2nd
#include <stdio.h>
#include <string.h>

void check(char *str)
{
    int i;
    int n = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' && str[i + 3] == 'b')
        {
            n++;
        }
    }
    printf("The number of times 'a' appear before 'b' in the string seperated b exactly 2 characters is : %d\n", n);
}

void encode1(char *str)
{
    char c[21];
    int i;
    strcpy(c, str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (c[i] >= 'a' && c[i] <= 'x')
            c[i] = c[i] + 2;
        else if (c[i] == 'y' || c[i] == 'z')
            c[i] = 'b' - 'z' + c[i];
    }
    printf("String after encode1 is : %s\n", c);
}

void encode2(char *str)
{
    char c[41];
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        c[2 * i] = 'a';
        c[(2 * i) + 1] = str[i];
    }
    c[2 * i] = '\0';
    printf("The string after encode2 is : %s", c);
}

int main()
{
    char str[50];
    printf("Enter a string : ");
    scanf(" %s", str);
    while (strlen(str) >= 20)
    {
        printf("Enter again : ");
        scanf(" %s", str);
    }
    check(str);
    encode1(str);
    encode2(str);
    return 0;
}