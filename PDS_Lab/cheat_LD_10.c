#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//
//-----------   1st    --------------
//
// void nonRecb2d(int *bin, int size, int *add, int *mul)
// {
//     int i;
//     int dec = 0;
//     printf("\n\nNon-Recursive Function :\n");
//     printf("The binary number is : ");
//     for (i = 0; i < size; i++)
//     {
//         (*add)++;
//         printf("%d", bin[i]);
//         dec = (dec * 2) + bin[i];
//         (*add)++;
//         (*mul)++;
//     }
//     printf("\nThe decimal equivalent : %d ", dec);
// }

// void recb2d(int *bin, int size, int *add, int *mul)
// {
//     static int dec = 0;
//     if (size == 16)
//     {
//         printf("\nRecusive Function : \n");
//         printf("The binary number is : ");
//     }
//     else if (size == 0)
//     {
//         printf("\nThe decimal equivalent is : %d\n", dec);
//         return;
//     }
//     dec = (dec * 2) + bin[16 - size];
//     (*add)++;
//     (*mul)++;
//     printf("%d", bin[16 - size]);
//     size--;
//     (*add)++;
//     recb2d(bin, size, add, mul);
// }

// int main()
// {
//     srand(time(NULL));
//     int binNum[16];
//     int i;
//     int addnonrec = 0, mulnonrec = 0;
//     int addrec = 0, mulrec = 0;
//     printf("The random binary number is : ");
//     for (i = 0; i < 16; i++)
//     {
//         binNum[i] = rand() % 2;
//         printf("%d", binNum[i]);
//     }
//     nonRecb2d(binNum, 16, &addnonrec, &mulnonrec);
//     printf("\nNo. of addition : %d\n", addnonrec);
//     printf("No. of multiplication : %d\n", mulnonrec);
//     recb2d(binNum, 16, &addrec, &mulrec);
//     printf("No. of addition : %d\n", addrec);
//     printf("No. of multiplication : %d\n", mulrec);
//     return 0;
// }
//
//--------------------    2nd    -------------------
//
// int main()
// {
//     srand(time(NULL));

//     int m[6][6];
//     int i, j, k, l;
//     int temp;
//     int sum1, sum2;
//     int count = 0;

//     printf("The matrix is : \n");

//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             m[i][j] = (rand() % 9) + 1;
//             printf("%d  ", m[i][j]);
//         }
//         printf("\n");
//     }

//     printf("The diagonal elements are : \n");

//     for (i = 0; i < 6; i++)
//     {
//         printf("%d  ", m[i][i]);
//     }

//     printf("\n");

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             m[i][j] = temp;

//             if (m[i][j + 1] == temp + 1 && m[i + 1][j] == temp + 1 && m[i + 1][j + 1] == temp + 2)
//             {
//                 if (count == 0)
//                 {
//                     printf("Yes\n");
//                 }

//                 count++;

//                 printf("Value of i = %d at row = %d , column = %d\n", temp, i, j);

//                 for (k = 0; k < 2; k++)
//                 {
//                     for (l = 0; l < 2; l++)
//                     {
//                         printf("%d  ", m[i + k][j + l]);
//                     }
//                     printf("\n");
//                 }
//             }
//         }
//     }

//     if (count == 0)
//     {
//         printf("No\n");
//     }

//     count = 0;

//     for (i = 0; i < 6; i++)
//     {
//         sum1 = 0;

//         for (k = 0; k < 6; k++)
//         {
//             sum1 += m[j][k];
//         }

//         for (j = i + 1; j < 6; j++)
//         {
//             sum2 = 0;

//             for (k = 0; k < 6; k++)
//             {
//                 sum2 += m[j][k];
//             }

//             if (sum1 == sum2)
//             {
//                 if (count == 0)
//                 {
//                     printf("Yes\n");
//                 }

//                 printf("Sum of row %d = Sum of row %d = %d\n", i, j, sum1);
//                 count++;
//             }
//         }
//     }

//     if (count == 0)
//     {
//         printf("No");
//     }
// }
//
//------------------    3rd    -----------------
//

struct stu
{
    char name[16];
    int age;
};

void same_name(struct stu *list, int n)
{
    int *p;
    int i, j, k;
    p = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        if (p[i] == 1)
            continue;
        k = 0;
        p[i] = 1;
        for (j = i + 1; j < n; j++)
        {
            if (p[j] == 1)
                continue;
            if (strcmp(list[i].name, list[j].name) == 0)
            {
                printf("Name : %-20sAge : %d\n", list[j].name, list[j].age);
                p[j] = 1;
                k++;
            }
        }
        if (k > 0)
        {
            printf("Name : %-20sAge : %d\n", list[i].name, list[i].age);
            printf("\n");
        }
    }
}

void same_age(struct stu *list, int n)
{
    int *p;
    int i, j, k;
    p = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        if (p[i] == 1)
            continue;
        k = 0;
        p[i] = 1;
        for (j = i + 1; j < n; j++)
        {
            if (p[j] == 1)
                continue;
            if (list[i].age == list[j].age)
            {
                printf("Name : %-20sAge : %d\n", list[j].name, list[j].age);
                p[j] = 1;
                k++;
            }
        }
        if (k > 0)
        {
            printf("Name : %-20sAge : %d\n", list[i].name, list[i].age);
            printf("\n");
        }
    }
}

int main()
{
    int n;
    struct stu *list;
    char temp[50];
    int i;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    while (n > 10 || n < 1)
    {
        printf("Enter again : ");
        scanf("%d", &n);
    }
    list = (struct stu *)malloc(sizeof(struct stu) * n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Your name : ");
        scanf(" %s", temp);
        while (strlen(temp) > 15)
        {
            printf("Enter Again : ");
            scanf(" %s", temp);
        }
        strcpy(list[i].name, temp);
        printf("Enter Your age : ");
        scanf("%d", &list[i].age);
        while (list[i].age <= 0)
        {
            printf("Enter Again : ");
            scanf("%d", &list[i].age);
        }
    }
    printf("\nStudens with same name :\n");
    same_name(list, n);
    printf("Students of same age :\n");
    same_age(list, n);
}