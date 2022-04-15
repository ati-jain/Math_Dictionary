#include <stdio.h>
#include <stdlib.h>
int main()
{
    int len;
    printf("Enter the length of your employee id : ");
    scanf("%d", &len);
    char *id;
    id = malloc((len + 1) * sizeof(char));
    printf("Enter your id : ");
    scanf("%s", id);
    printf("%s",id);
    return 0;
}