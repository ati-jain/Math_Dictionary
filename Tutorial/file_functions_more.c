#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("sample2.txt", "a+");
    char str[100];
    fgets(str,20,ptr);
    printf("%s",str);
    strcpy(str,"hua kuch ye ki");
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}