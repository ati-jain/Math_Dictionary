#include <stdio.h>
int main()
{
    FILE *pntr;
    char text[100];
    pntr = fopen("sample.txt", "w"); //r to read only and a to add text only
    printf("Enter the text : \n");
    gets(text);
    fprintf(pntr, "%s",text) ;
    printf("The file has been modified\n");
    fclose(pntr);
    return 0;
}