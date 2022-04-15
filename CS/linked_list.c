#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
    int a;
    struct list *next;

} node;

void insert_end(node **tail)
{
    (*tail)->next = (node *)malloc(sizeof(node));
    (*tail) = (*tail)->next;
    printf("Enter int : ");
    scanf("%d", &((**tail).a));
    (*tail)->next = NULL;
}

void show(node *p)
{
    int l = 1;
    while (p != NULL)
    {
        printf("%d) %d\n", l, p->a);
        p = p->next;
        l++;
    }
}

void insert_begin(node **head)
{
    node *temp = *head;
    (*head) = (node *)malloc(sizeof(node));
    (**head).next = temp;
    printf("Enter int : ");
    scanf("%d", &((**head).a));
}

void insert_n(node *p, int l)
{
    int n;
    node *temp;
    printf("Enter n (after which you want to insert) : ");
    scanf("%d", &n);
    while (n < 1 || n > l)
    {
        printf("Enter again : ");
        scanf("%d", &n);
    }
    for (int i = 1; i < n; i++)
    {
        p = p->next;
    }
    temp = (node *)malloc(sizeof(node));
    printf("Enter int : ");
    scanf("%d", &(temp->a));
    temp->next = p->next;
    p->next = temp;
}

void del_first(node **head)
{
    node *temp = *head;
    (*head) = (**head).next;
    free(temp);
}

void del_last(node **head, node **tail)
{
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        node *p = *head;
        while (p->next->next != NULL)
        {
            p = p->next;
        }
        free(p->next);
        p->next = NULL;
        *tail = p;
    }
}

void del_n(node **head, node **tail, int l)
{
    int n;
    node *p;
    printf("Enter n (element which you want to delete) : ");
    scanf("%d", &n);
    while (n < 1 || n > l)
    {
        printf("Enter again : ");
        scanf("%d", &n);
    }
    if (n == 1)
    {
        if (l == 1)
        {
            free(*head);
            *head = NULL;
            *tail = NULL;
        }
        else
        {
            p = *head;
            *head = p->next;
            free(p);
        }
    }
    else
    {
        p = *head;
        for (int i = 0; i < n - 2; i++)
        {
            p = p->next;
        }
        node *temp = p->next;
        p->next = p->next->next;
        free(temp);
        if (n == l)
            *tail = p;
    }
}

int main()
{
    int n;
    int l = 0;
    node *head, *tail;
    head = NULL;
    tail = head;
    printf("Enter 0 to exit \n");
    printf("Enter 1 to insert new node at begining\n");
    printf("Enter 2 to insert new node at end\n");
    printf("Enter 3 to insert the node at nth place\n");
    printf("Enter 4 to delete first element\n");
    printf("Enter 5 to delete last element\n");
    printf("Enter 6 to delete nth element\n");
    printf("Enter 7 to see the list\n");
    do
    {
        printf("Enter : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            if (l == 0)
            {
                head = (node *)malloc(sizeof(node));
                printf("Enter int : ");
                scanf("%d", &(head->a));
                head->next = NULL;
                tail = head;
                l++;
            }
            else
            {
                insert_begin(&head);
                l++;
            }
            break;

        case 2:
            if (l == 0)
            {
                head = (node *)malloc(sizeof(node));
                printf("Enter int : ");
                scanf("%d", &(head->a));
                head->next = NULL;
                tail = head;
                l++;
            }
            else
            {
                insert_end(&tail);
                l++;
            }
            break;

        case 3:
            if (l == 0)
            {

                head = (node *)malloc(sizeof(node));
                printf("Enter int : ");
                scanf("%d", &(head->a));
                head->next = NULL;
                tail = head;
                l++;
            }
            else
            {
                insert_n(head, l);
                l++;
            }
            break;

        case 4:
            if (l == 0)
                printf("No items in the list!\n");
            else
            {
                del_first(&head);
                l--;
            }
            break;

        case 5:
            if (l == 0)
                printf("No items in the list!\n");
            else
            {
                del_last(&head, &tail);
                l--;
            }
            break;

        case 6:
            if (l == 0)
                printf("No items in the list!\n");
            else
            {
                del_n(&head, &tail, l);
                l--;
            }
            break;

        case 7:
            if (l == 0)
                printf("No items in the list!\n");
            else
                show(head);
            break;
        }
    } while (n != 0);
    return 0;
}