//Name : Atishay Jain
//Roll No. : 20CS30008
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *sptr[100]; //global array of 100 string pointers

//giving prototypes of the function
void create(int *);

void lengthStat(int);

void letterStat(int);

void search(int);

void removeDuplicate(int *);

void searchReplace(int n);

int main()
{
    int i;
    int n = 0; //number of strings (initially it is 0)
    do
    {
        printf("Choose a function :\n\n"); //showing the different choices

        printf("1 -> create()\n");
        printf("2 -> lengthStat()\n");
        printf("3 -> letterStat()\n");
        printf("4 -> search()\n");
        printf("5 -> removeDuplicate()\n");
        printf("6 -> searchReplace()\n\n");

        printf("Enter your choice : ");
        scanf("%d", &i);

        switch (i)
        {
            //calling appropriate function according to the user call
        case 0:
            break;

        case 1:
            create(&n); //passing &n because it will change the value of n
            break;

        case 2:
            lengthStat(n);
            break;

        case 3:
            letterStat(n);
            break;

        case 4:
            search(n);
            break;

        case 5:
            removeDuplicate(&n); //passing &n because it will change the value of n as the number of words will decrease
            break;

        case 6:
            searchReplace(n);
            break;

        default:
            printf("Invalid Input!!!"); //if user enters some invalid input
            break;
        }
    } while (i != 0); //condition to end the program

    return 0;
}

void create(int *n)
{
    int i, j;
    int check;
    char temp[50];

    printf("Enter the number of words : ");
    scanf("%d", n); //how many words do you want to enter

    while (*n > 100 || *n < 0) //if invalid input is entered
    {
        printf("Enter again : ");
        scanf("%d", n);
    }

    printf("Enter the words :\n");
    for (i = 0; i < *n; i++)
    {
        printf("%d) ", i + 1);
        scanf("%s", temp);

        check = 0;
        for (j = 0; temp[j] != '\0'; j++)
        {
            if (temp[j] < 'a' || temp[j] > 'z') //if the word dont conatain only lower case characters
            {
                check = 1;
                break;
            }
        }

        if (check == 1)
        {
            printf("Invalid input!!!\n");
            printf("Enter again : \n");
            i--;
        }

        else
        {
            sptr[i] = (char *)malloc(sizeof(char) * (strlen(temp) + 1));
            strcpy(sptr[i], temp);
        }
    }

    printf("\nThe entered strings are :\n");
    for (i = 0; i < *n; i++)
    {
        printf("%d) %s\n", i + 1, sptr[i]); //showing the list
    }

    printf("\n");
}

void lengthStat(int n)
{
    int i;
    int one_two = 0;
    int three_five = 0;
    int larger_five = 0;

    for (i = 0; i < n; i++)
    {
        switch (strlen(sptr[i]))
        {
        case 1:
        case 2:
            one_two++; //for length 1 and 2 , one_two will increase
            break;

        case 3:
        case 4:
        case 5:
            three_five++; //for length 3,4 and 5 , three_five will increase
            break;

        default:
            larger_five++; //else larger_five will increase
            break;
        }
    }

    if (n > 0)
    {
        printf("Number of words of length 1 - 2 : %d\n", one_two);
        printf("Number of words of length 3 - 5 : %d\n", three_five);
        printf("Number of words of length larger than 5 : %d\n", larger_five);
    }

    else
    {
        printf("Enter some words first!\n");
    }

    printf("\n");
}

void letterStat(int n)
{
    int index1, index2;
    //declaring all the variables
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;

    for (index1 = 0; index1 < n; index1++)
    {
        for (index2 = 0; sptr[index1][index2] != '\0'; index2++)
        {
            //increasing the appropriate variable
            switch (sptr[index1][index2])
            {
            case 'a':
                a++;
                break;

            case 'e':
                e++;
                break;

            case 'i':
                i++;
                break;

            case 'o':
                o++;
                break;

            case 'u':
                u++;
                break;

            default:
                break;
            }
        }
    }

    if (n > 0)
    {
        printf("Number of vowels :\n");
        printf("a : %d\n", a);
        printf("e : %d\n", e);
        printf("i : %d\n", i);
        printf("o : %d\n", o);
        printf("u : %d\n", u);
    }

    else
    {
        printf("Enter some words first!\n");
    }

    printf("\n");
}

void search(int n)
{
    if (n > 0)
    {
        char src[50];
        int i;
        int copy = 0;

        printf("Enter the word you want to search : ");
        scanf("%s", src);

        for (i = 0; i < n; i++)
        {
            if (strcmp(src, sptr[i]) == 0)
            {
                copy++;
                if (copy == 1)
                    printf("The entered word is present in the list.\n");
                printf("sptr[%d] : %s\n", i, sptr[i]);
            }
        }

        if (copy == 0) //to check if the word is present or not
            printf("The entered word is not present in the list.\n");
    }

    else
        printf("Enter some words first!\n");

    printf("\n");
}

void removeDuplicate(int *n)
{
    if (*n > 0)
    {
        int i, j, k;
        int len = *n;

        for (i = 0; i < len; i++)
        {
            for (j = i + 1; j < len; j++)
            {
                if (strcmp(sptr[i], sptr[j]) == 0) //if duplicates exist
                {
                    len--;

                    for (k = j; k < len; k++)
                    {
                        sptr[k] = (char *)realloc(sptr[k], sizeof(char) * (strlen(sptr[k + 1]) + 1)); //rellocating the memory
                        strcpy(sptr[k], sptr[k + 1]);
                    }

                    free(sptr[len]); //freeing the extra space

                    j--;
                }
            }
        }

        *n = len; //changing the number of words

        printf("The list after removing duplicates are :\n");
        for (i = 0; i < len; i++)
        {
            printf("%d) %s\n", i + 1, sptr[i]);
        }
    }

    else
        printf("Enter some words first!\n");

    printf("\n");
}

void searchReplace(int n)
{
    if (n > 0)
    {
        char temp[50];
        int i, j;
        int rep = 0;

        printf("Enter a word : ");
        scanf("%s", temp);

        for (i = 0; i < n; i++)
        {
            if (strcmp(temp, sptr[i]) == 0) //if the word exist
            {
                printf("The entered word is present in the list at position %d.\n", i + 1);

                printf("Enter the new word : ");
                scanf("%s", temp);
                sptr[i] = (char *)realloc(sptr[i], sizeof(char) * (strlen(temp) + 1)); //reallocating the memory
                strcpy(sptr[i], temp);

                printf("The word is replaced.\n");
                printf("The updated list of words :\n");
                rep = 1;

                break;
            }
        }

        if (rep == 0) //if the word is not present
        {
            printf("The entered word is not present in the list.\n");
            printf("The list is :\n");
        }

        for (i = 0; i < n; i++)
        {
            printf("%d) %s\n", i + 1, sptr[i]);
        }
    }

    else
        printf("Enter some words first!\n");

    printf("\n");
}