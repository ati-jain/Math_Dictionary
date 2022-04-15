//Name : Atishay Jain
//Roll No. : 20CS30008

#include <stdio.h>
#include <string.h>

struct stud
{
    unsigned int roll;
    char name[21];
    int points;
} badminton[10], carrom[10], tt[10], tmp[30];

void allGames(int a, int b, int c)
{
    int i, j, k;
    int index = 0;
    int max = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (badminton[i].roll == carrom[j].roll)
            {
                for (k = 0; k < c; k++)
                {
                    if (badminton[i].roll == tt[k].roll)
                    {
                        tmp[index].roll = badminton[i].roll;
                        strcpy(tmp[index].name, badminton[i].name);
                        tmp[index].points = badminton[i].points + carrom[j].points + tt[k].points;
                        if (tmp[max].points < tmp[index].points)
                        {
                            max = index;
                        }
                        index++;
                        break;
                    }
                }
                break;
            }
        }
    }
    printf("\nStudents in all games : \n");
    printf("%-15s%-30s%-10s\n", "Roll No.", "Name", "Points");
    if (index > 0)
    {
        for (i = 0; i < index; i++)
        {
            printf("%-15d%-30s%-10d\n", tmp[i].roll, tmp[i].name, tmp[i].points);
        }
        printf("Max points \n");
        printf("%-15s%-30s%-10s\n", "Roll No.", "Name", "Points");
        printf("%-15d%-30s%-10d\n", tmp[max].roll, tmp[max].name, tmp[max].points);
    }
}

void twoGames(int a, int b, int c)
{
    int i, j, k;
    int index = 0;
    int max = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (badminton[i].roll == carrom[j].roll)
            {
                for (k = 0; k < c; k++)
                {
                    if (badminton[i].roll == tt[k].roll)
                        break;
                }
                if (k == c)
                {
                    tmp[index].roll = badminton[i].roll;
                    strcpy(tmp[index].name, badminton[i].name);
                    tmp[index].points = badminton[i].points + carrom[j].points;
                    if (tmp[max].points < tmp[index].points)
                    {
                        max = index;
                    }
                    index++;
                }
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        for (k = 0; k < c; k++)
        {
            if (badminton[i].roll == tt[k].roll)
            {
                for (j = 0; j < b; j++)
                {
                    if (badminton[i].roll == carrom[j].roll)
                        break;
                }
                if (j == b)
                {
                    tmp[index].roll = badminton[i].roll;
                    strcpy(tmp[index].name, badminton[i].name);
                    tmp[index].points = badminton[i].points + tt[k].points;
                    if (tmp[max].points < tmp[index].points)
                    {
                        max = index;
                    }
                    index++;
                }
            }
        }
    }
    for (j = 0; j < b; j++)
    {
        for (k = 0; k < c; k++)
        {
            if (carrom[j].roll == tt[k].roll)
            {
                for (i = 0; i < a; i++)
                {
                    if (badminton[i].roll == carrom[j].roll)
                        break;
                }
                if (i == a)
                {
                    tmp[index].roll = carrom[j].roll;
                    strcpy(tmp[index].name, carrom[j].name);
                    tmp[index].points = carrom[j].points + tt[k].points;
                    if (tmp[max].points < tmp[index].points)
                    {
                        max = index;
                    }
                    index++;
                }
            }
        }
    }

    printf("\nStudents in two games : \n");
    printf("%-15s%-30s%-10s\n", "Roll No.", "Name", "Points");
    if (index > 0)
    {
        for (i = 0; i < index; i++)
        {
            printf("%-15d%-30s%-10d\n", tmp[i].roll, tmp[i].name, tmp[i].points);
        }
        printf("Max points \n");
        printf("%-15s%-30s%-10s\n", "Roll No.", "Name", "Points");
        printf("%-15d%-30s%-10d\n", tmp[max].roll, tmp[max].name, tmp[max].points);
    }
}

void oneGame(int a, int b, int c)
{
    int i, j;
    int index = 0;
    int max = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (badminton[i].roll == carrom[j].roll)
            {
                break;
            }
        }
        if (j == b)
        {
            for (j = 0; j < c; j++)
            {
                if (badminton[i].roll == tt[j].roll)
                    break;
            }
            if (j == c)
            {
                tmp[index].roll = badminton[i].roll;
                strcpy(tmp[index].name, badminton[i].name);
                tmp[index].points = badminton[i].points;
                if (tmp[max].points < tmp[index].points)
                {
                    max = index;
                }
                index++;
            }
        }
    }
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            if (carrom[i].roll == badminton[j].roll)
            {
                break;
            }
        }
        if (j == a)
        {
            for (j = 0; j < c; j++)
            {
                if (carrom[i].roll == tt[j].roll)
                    break;
            }
            if (j == c)
            {
                tmp[index].roll = carrom[i].roll;
                strcpy(tmp[index].name, carrom[i].name);
                tmp[index].points = carrom[i].points;
                if (tmp[max].points < tmp[index].points)
                {
                    max = index;
                }
                index++;
            }
        }
    }
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (tt[i].roll == carrom[j].roll)
            {
                break;
            }
        }
        if (j == b)
        {
            for (j = 0; j < a; j++)
            {
                if (tt[i].roll == badminton[j].roll)
                    break;
            }
            if (j == a)
            {
                tmp[index].roll = tt[i].roll;
                strcpy(tmp[index].name, tt[i].name);
                tmp[index].points = tt[i].points;
                if (tmp[max].points < tmp[index].points)
                {
                    max = index;
                }
                index++;
            }
        }
    }
    printf("\nStudents in only one game : \n");
    printf("%-15s%-30s%-10s\n", "Roll No.", "Name", "Points");
    if (index > 0)
    {
        for (i = 0; i < index; i++)
        {
            printf("%-15d%-30s%-10d\n", tmp[i].roll, tmp[i].name, tmp[i].points);
        }
        printf("Max points \n");
        printf("%-15s%-30s%-10s\n", "Roll No.", "Name", "Points");
        printf("%-15d%-30s%-10d\n", tmp[max].roll, tmp[max].name, tmp[max].points);
    }
}

int main()
{
    int nbad, ncar, ntt;
    int i, j;
    char temp[50];
    printf("Enter the number of students in badminton : ");
    scanf("%d", &nbad);
    for (i = 0; i < nbad; i++)
    {
        printf("Enter roll number of the student : ");
        scanf("%u", &(badminton[i].roll));
        for (j = 0; j < i; j++)
        {
            if (badminton[j].roll == badminton[i].roll)
            {
                printf("This roll number is alredy registered!\n");
                i--;
                j = -1;
                break;
            }
        }
        if (i == j)
        {
            printf("Enter name : ");
            fflush(stdin);
            gets(temp);
            while (strlen(temp) > 20)
            {
                printf("Invalid Input! Enter name again : ");
                fflush(stdin);
                gets(temp);
            }
            strcpy(badminton[i].name, temp);
            printf("Enter points : ");
            scanf("%d", &(badminton[i].points));
        }
    }

    printf("Enter the number of students in carrom : ");
    scanf("%d", &ncar);
    for (i = 0; i < ncar; i++)
    {
        printf("Enter roll number of the student : ");
        scanf("%u", &(carrom[i].roll));
        for (j = 0; j < i; j++)
        {
            if (carrom[j].roll == carrom[i].roll)
            {
                printf("This roll number is already registered!\n");
                i--;
                j = -1;
                break;
            }
        }
        if (i == j)
        {
            printf("Enter name : ");
            fflush(stdin);
            gets(temp);
            while (strlen(temp) > 20)
            {
                printf("Invalid Input! Enter name again : ");
                fflush(stdin);
                gets(temp);
            }
            strcpy(carrom[i].name, temp);
            printf("Enter points : ");
            scanf("%d", &(carrom[i].points));
        }
    }

    printf("Enter the number of students in tt : ");
    scanf("%d", &ntt);
    for (i = 0; i < ntt; i++)
    {
        printf("Enter roll number of the student : ");
        scanf("%u", &(tt[i].roll));
        for (j = 0; j < i; j++)
        {
            if (tt[j].roll == tt[i].roll)
            {
                printf("This roll number is already registered!\n");
                i--;
                j = -1;
                break;
            }
        }
        if (i == j)
        {
            printf("Enter name : ");
            fflush(stdin);
            gets(temp);
            while (strlen(temp) > 20)
            {
                printf("Invalid Input! Enter name again : ");
                fflush(stdin);
                gets(temp);
            }
            strcpy(tt[i].name, temp);
            printf("Enter points : ");
            scanf("%d", &(tt[i].points));
        }
    }

    printf("\nStudents in Badminton : \n");
    printf("%-15s%-30s%-10s\n", "Roll No.", "Name", "Points");
    for (i = 0; i < nbad; i++)
    {
        printf("%-15d%-30s%-10d\n", badminton[i].roll, badminton[i].name, badminton[i].points);
    }

    printf("\nStudents in Carrom : \n");
    printf("%-15s%-30s%-10s\n", "Roll No.", "Name", "Points");
    for (i = 0; i < ncar; i++)
    {
        printf("%-15d%-30s%-10d\n", carrom[i].roll, carrom[i].name, carrom[i].points);
    }

    printf("\nStudents in TT : \n");
    printf("%-15s%-30s%-10s\n", "Roll No.", "Name", "Points");
    for (i = 0; i < nbad; i++)
    {
        printf("%-15d%-30s%-10d\n", tt[i].roll, tt[i].name, tt[i].points);
    }

    allGames(nbad, ncar, ntt);

    twoGames(nbad, ncar, ntt);

    oneGame(nbad, ncar, ntt);

    return 0;
}