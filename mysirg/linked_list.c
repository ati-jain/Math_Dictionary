#include <stdio.h>
#include <stdlib.h>
struct node
{
    char name[20];
    int roll;
    struct node *t;
} *START = NULL;
struct node *createnode()
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    return temp;
}
void delete_end_node()
{
    struct node *temp;
    if (START == NULL)
        ;
    else
    {
        temp = START;
        while (temp->t != NULL)
            temp = temp->t;
        temp = NULL;
    }
}
int main()
{
    struct node *list[10];
    START = list[0];
    for (int i = 0; i < 10; i++)
    {
        list[i] = createnode();
        printf("Enter : ");
        scanf("%d", &list[i]->roll);
        list[i]->t = list[i + 1];
    }
    delete_end_node();
    printf("%d", sizeof(list));
    return 0;
}