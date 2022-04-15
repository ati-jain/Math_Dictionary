#include<stdio.h>

void printstr(char c[])
{
    int i=0;
    while (c[i]!='\0')
    {
        printf("%c",c[i]);
        i++;
    }
    printf("\n");
    
}
int main()
{
    // char str[8];
    // printstr(str);
    // puts(str);
    // printf("%s",str);
    // printf("\n");
    // str[5]="Jain";
    // printstr(str);
    // puts(str);
    // printf("%s",str);
    // return 0;
     // char str2[3]="Atishay";
    // printstr(str2);
    // puts(str2);
    // printf("%s",str2);
    // printf("\n");
    // char str[]={'J','a','i','n'};
    // printstr(str);
    // puts(str);
    // printf("%s",str);
    // char str[10] = "Hello";
    // str[2];
    // printstr(str);
    // puts(str);
    // printf("%s",str);
    char str[5];
    scanf("%s",str);
    puts(str);
    clrscr();
    return 0;
}