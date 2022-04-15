#include <stdio.h>
#include <string.h>
void changes(char *str, char old[20], char new[20])
{
    char *p = NULL;
    int dif = strlen(new) - strlen(old);
    p = strstr(str, old);
    if (dif < 0)
    {
        for (int i = 0; i < strlen(new); i++)
        {
            p[i] = new[i];
        }
        for (int i = strlen(new); i <= strlen(p) + dif; i++)
        {
            p[i] = p[i - dif];
        }
    }
    else
    {
        char p2[strlen(p) + dif];
        strcpy(p2, new);
        for (int i = strlen(new); i <= strlen(p) + dif; i++)
        {
            p2[i] = p[i - dif];
        }
        str[strlen(str) - strlen(p)] = '\0';
        strcat(str,p2);
    }
}
int main()
{
    printf("Receipt Generator\n");
    char b[200];
    char name[20];
    char amount[20];
    char cname[20];
    FILE *p = NULL;
    FILE *p2 = NULL;
    p = fopen("bill_base.txt", "r");
    p2 = fopen("Bill.txt", "w");
    fgets(b, 200, p);
    printf("Enter the name : ");
    gets(name);
    printf("Enter the amount : ");
    gets(amount);
    printf("Enter the cahier name : ");
    gets(cname);
    changes(b, "(name)", name);
    changes(b, "(amount)", amount);
    changes(b, "(cashier)", cname);
    fprintf(p2, "%s", b);
    printf("The bill is generated.\nSee \"Bill.txt\"\n");
    printf("Press Enter to exit");
    scanf("%c",b);
    fclose(p);
    fclose(p2);
    return 0;
}