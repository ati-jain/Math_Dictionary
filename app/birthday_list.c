#include <conio.h>
#include <string.h>
#include <stdio.h>
int main()
{
    FILE *p;
    char c, date[15], name[20];
    p = fopen("birthday.txt", "a+");
    printf("Birthday List\n");
    printf("Add a date : Press 1\n");
    printf("Search : Press 2\n");
    printf("See All : Press 3\n");
    c = getch();
    if (c == 49) //c = 0
    {
        printf("Enter Name : ");
        scanf(" %[^\n]%*c", name);
        printf("Enter the Date (Press 0 for today) : ");
        scanf(" %[^\n]%*c", date);
        if (strcmp(date, "0") == 0)
            strncpy(date, __DATE__, 6);
        fprintf(p, "%s -> %s", name, date);
    }
    // else if (c == 50) //c = 1
    // {
    //     printf("Enter name or date : ");
    //     scanf("%s", name);
    //     fscanf("");
    // }
    else if (c == 51)
    {
        char str[16];
        while (fgets(str, 15, p) != NULL)
            printf("%s", str);
    }
    printf("Successful");
    return 0;
}