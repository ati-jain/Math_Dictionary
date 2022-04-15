#include <stdio.h>

int main()
{
    int a = 2;
    char c = 'A';
    switch (a)
    {
    case 2:
        printf("2\n");
        switch (c)
        {
        case 'A':
            printf("Your Name is A\n");
            break;

        default:
            break;
        }
    case 3:
        printf("3\n");
        break;
    case 4:
        printf("4\n");
    case 5:
        printf("5\n");
    }
    return 0;
}
