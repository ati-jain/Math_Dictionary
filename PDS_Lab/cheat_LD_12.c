#include <stdio.h>
#include <string.h>

struct book
{
    char name[21];
    int year;
    char purchase[11];
    int price;
    char publisher[11];
    int accessNo;
    int isIssued;
    char friendName[21];
};

int nbook = 0;

void sort_by_title(struct book *p)
{
    struct book temp;
    for (i = 0; i < nbook; i++)
    {
        if (strcmp(p[i].name, p[i + 1].name) > 0)
        {
            temp = p[i];
            p[i] = p[i + 1];
            p[i + 1] = temp;
        }
    }
}

void enterBooks(struct book *p)
{
    char temp[50];
    printf("Enter Name of book : ");
    fflush(stdin);
    gets(temp);
    while (strlen(temp) > 20)
    {
        printf("Invalid input!\nEnter Again : ");
        fflush(stdin);
        gets(temp);
    }
    strcpy(p->name, temp);

    printf("Enter Year of Publication : ");
    scanf("%d", &(p->year));

    printf("Enter Date of Purchase : ");
    fflush(stdin);
    gets(temp);
    while (strlen(temp) > 10)
    {
        printf("Invalid input!\nEnter Again : ");
        fflush(stdin);
        gets(temp);
    }
    strcpy(p->purchase, temp);

    printf("Enter Price : ");
    scanf("%d", &(p->price));
    while (p->price < 0)
    {
        printf("Invlaid input!\nEnter Again : ");
        scanf("%d", &(p->price));
    }

    printf("Enter Publisher : ");
    fflush(stdin);
    gets(temp);
    while (strlen(temp) > 10)
    {
        printf("Invalid input!\nEnter Again : ");
        fflush(stdin);
        gets(temp);
    }
    strcpy(p->publisher, temp);

    p->accessNo = 1000 + nbook;

    printf("Details of the Registered Book : \n\n");

    printf("Name of Book : %s\n", p->name);
    printf("Year of Publication : %d\n", p->year);
    printf("Date of Purchase : %s\n", p->purchase);
    printf("Price : %d\n", p->price);
    printf("Publisher : %s\n", p->publisher);
    printf("accessNo. : %d\n", p->accessNo);

    nbook++;
}

int main()
{

    struct book bookArray[100];
    int i;

    do
    {
        printf("Choose a function :\n\n"); //showing the different choices

        printf("1 -> Enter Book\n");
        printf("2 -> Search Book\n");
        printf("3 -> Issue Book\n");
        printf("4 -> Return Book\n");
        printf("5 -> Store Book\n");
        printf("6 -> searchReplace()\n\n");

        printf("Enter your choice : ");
        scanf("%d", &i);

        switch (i)
        {
        case 0:
            break;

        case 1:
            enterBooks(&bookArray[nbook]);
            break;

        case 2:
            // searchBook();
            break;

        case 3:
            // issueBook();
            break;

        case 4:
            // returnBook();
            break;

        case 5:
            // storeBook();
            break;

        case 6:
            // searchReplace(n);
            break;

        default:
            printf("Invalid Input!!!");
            break;
        }
    } while (i != 0);
    return 0;
}