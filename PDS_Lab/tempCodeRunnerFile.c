#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct operatorNode
{
    char data;
    struct operatorNode *next;
};

struct operatorStack
{
    int size;
    struct operatorNode *top;
};

struct operatorStack *createStack();

int isEmpty(struct operatorStack *stack);

char peek(struct operatorStack *stack);

char pop(struct operatorStack *stack);

void push(struct operatorStack *stack, char op);

int isOperand(char *c);

int isOperator(char *c);

int precedence(char op1, char op2);

int isLeftParentesis(char *c);

int isRightParentesis(char *c);

int main()
{
    FILE *p, *fo;
    p = fopen("input.txt", "r");
    fo = fopen("20CS30008.txt", "w");
    struct operatorStack *stack;
    stack = createStack();
    int i;
    char c[50];
    while (!feof(p))
    {
        char output[50] = "\0";
        do
        {
            i = -1;
            i++;
            c[i] = fgetc(p);

            if (isOperand(c))
            {
                strcat(output, c);
            }

            else if (isOperator(c))
            {
                while (!isEmpty(stack) && precedence(peek(stack), c[0]) && peek(stack) != '(')
                {
                    char ch[2] = " ";
                    ch[0] = pop(stack);
                    strcat(output, ch);
                }

                push(stack, c[0]);
            }

            else if (isLeftParentesis(c))
            {
                push(stack, c[0]);
            }

            else if (isRightParentesis(c))
            {
                while (peek(stack) != '(')
                {
                    char ch[2] = " ";
                    ch[0] = pop(stack);
                    strcat(output, ch);
                }

                pop(stack);
            }

            else if (c[i] == ' ')
                strcat(output, " ");

        } while (c[i] != 10 && !feof(p));

        while (!isEmpty(stack))
        {
            char ch[3] = " ";
            ch[0] = pop(stack);
            strcat(output, ch);
        }

        fprintf(fo, "%s\n", output);
    }
    fclose(p);
    fclose(fo);
    return 0;
}

struct operatorStack *createStack()
{
    struct operatorStack *p;
    p = (struct operatorStack *)malloc(sizeof(struct operatorStack));
    p->top = NULL;
    p->size = 0;
}

int isEmpty(struct operatorStack *stack)
{
    if (stack->size)
        return 0;
    return 1;
}

char peek(struct operatorStack *stack)
{
    return stack->top->data;
}

char pop(struct operatorStack *stack)
{
    struct operatorNode *p;
    char c = stack->top->data;
    p = stack->top;
    stack->top = stack->top->next;
    stack->size = stack->size - 1;
    free(p);
    return c;
}

void push(struct operatorStack *stack, char op)
{
    struct operatorNode *p;
    p = (struct operatorNode *)malloc(sizeof(struct operatorNode));
    p->next = stack->top;
    p->data = op;
    stack->top = p;
    stack->size = stack->size + 1;
}

int isOperand(char *c)
{
    if (c[0] <= '9' && c[0] >= '1')
        return 1;
    return 0;
}

int isOperator(char *c)
{
    if (c[0] == '+' || c[0] == '-' || c[0] == '*' || c[0] == '/' || c[0] == '%')
        return 1;
    return 0;
}

int precedence(char op1, char op2)
{
    if (op1 == '*' || op1 == '/' || op1 == '%')
        return 1;
    else if (op2 == '+' || op2 == '-')
        return 1;
    return 0;
}

int isLeftParentesis(char *c)
{
    if (c[0] == '(')
        return 1;
    return 0;
}

int isRightParentesis(char *c)
{
    if (c[0] == ')')
        return 1;
    return 0;
}