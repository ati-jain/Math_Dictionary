#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// 1st -----------------------

// int main()
// {
//     srand(time(NULL));
//     int a[4][4], i, j, temp;
//     printf("Matrix :\n");
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             a[i][j] = (rand() % 6) + 5;
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Columns :\n");
//     for (j = 0; j < 4; j++)
//     {
//         temp = 0;
//         for (i = 0; i < 4; i++)
//         {
//             temp += a[i][j];
//         }
//         if (temp == 30)
//         {
//             for (i = 0; i < 4; i++)
//             {
//                 printf("%d  ", a[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     printf("Rows :\n");
//     for (i = 0; i < 4; i++)
//     {
//         temp = 0;
//         for (j = 0; j < 4; j++)
//         {
//             temp += a[i][j];
//         }
//         if (temp == 30)
//         {
//             for (i = 0; i < 4; i++)
//             {
//                 printf("%d  ", a[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// 2nd -------------------------------

struct order
{
    char name[10];
    unsigned short item_code[5];
    int quantity[5];
};

void create_order(struct order *a, int n, int *o, int *sale)
{
    char temp[20], c;
    int i, j = 0;
    do
    {
        printf("Enter Your Name : ");
        fflush(stdin);
        gets(temp);
    } while (strlen(temp) >= 10);
    strcpy(a[n].name, temp);
    do
    {
        printf("Enter the item code : ");
        scanf("%d", &i);
        while (i > 20 || i < 0)
        {
            printf("Enter again :");
            scanf("%d", &i);
        }
        a[n].item_code[j] = i;
        printf("Enter the quantity : ");
        scanf("%d", &a[n].quantity[j]);
        sale[a[n].item_code[j] - 1] += a[n].quantity[j];
        if (j < 4)
        {
            printf("Enter e to complete order /else enter anthing : ");
            scanf(" %c", &c);
        }
        else if (j == 4)
        {
            printf("You can order 5 items only!!!");
            j++;
            break;
        }
        j++;
    } while (c != 'e' && c != 'E');
    o[n] = j - 1;
    printf("\nOrders Till Now : \n");
    for (i = 0; i <= n; i++)
    {
        printf("Name : %s\nOrders : \n", a[i].name);
        for (j = 0; j <= o[i]; j++)
        {
            printf("%d ---> %d\n", a[i].item_code[j], a[i].quantity[j]);
        }
        printf("\n");
    }
}

void serve_order(struct order *a, int n, int *o)
{
    int i, j;
    printf("Oldest order :\n");
    if (n >= 0)
    {
        printf("Name : %s\n", a[0].name);
        for (i = 0; i <= o[0]; i++)
        {
            printf("%d ---> %d\n", a[0].item_code[i], a[0].quantity[i]);
        }
        printf("\n");
    }
    printf("Pending Orders : \n");
    for (i = 0; i < n; i++)
    {
        strcpy(a[i].name, a[i + 1].name);
        printf("Name : %s\n", a[i].name);
        o[i] = o[i + 1];
        for (j = 0; j <= o[i]; j++)
        {
            a[i].item_code[j] = a[i + 1].item_code[j];
            a[i].quantity[j] = a[i + 1].quantity[j];
            printf("%d ---> %d\n", a[i].item_code[j], a[i].quantity[j]);
        }
        printf("\n");
    }
}

void display_statistics(int *sale)
{
    int i;
    printf("Sales :\n");
    for (i = 0; i < 20; i++)
    {
        if (sale[i] > 0)
            printf("%d ---> %d\n", i + 1, sale[i]);
    }
}
int main()
{
    struct order order_list[50];
    int o[50], i = -1, sale[20] = {0};
    char c;
    printf("Menu :\nItem-1\nItem-2\nItem-3\nItem-4\nItem-5\nItem-6\nItem-7\nItem-8\nItem-9\nItem-10\n");
    do
    {
        printf("Enter \"c\" to create order\nEnter \"s\" to serve order\nEnter \"d\" to display statics\nEnter \"e\" to exit\n");
        scanf(" %c", &c);
        if (c == 'c' || c == 'C')
        {
            i++;
            create_order(order_list, i, o, sale);
        }
        else if (c == 's' || c == 'S')
        {
            serve_order(order_list, i, o);
            i--;
        }
        else if (c == 'd' || c == 'D')
        {
            display_statistics(sale);
        }
        else if (c == 'e' || c == 'E')
            break;
        else
            printf("Invalid Input!!!\n");
    } while (1);
    return 0;
}