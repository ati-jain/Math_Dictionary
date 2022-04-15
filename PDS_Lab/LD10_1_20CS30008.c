//Name : Atishay Jain
//Roll No. : 20CS30008

#include <stdio.h>
#include <string.h>

struct student //  defining the structure
{
    int roll;
    char fname[21];
    char lname[21];
    char grades[5];
    float gpa;
};

struct student studArray[50]; //structure array

int nStuds = 0;

//prototypes of function
void enrolStuds();

void enterGrades();

void displayStuds();

void searchStuds();

void editStudGrades();

void dispMeritList();

int main()
{
    int i;
    do
    {
        printf("Choose a function :\n\n"); //showing the different choices

        printf("1 -> Enrol Student\n");
        printf("2 -> Enter Grade\n");
        printf("3 -> Dispaly Grades\n");
        printf("4 -> Search Student\n");
        printf("5 -> Edit Student Grades\n");
        printf("6 -> Display Merit List\n");
        printf("7 -> Exit\n\n");

        printf("Enter your choice : ");
        scanf("%d", &i); //scanning the input

        switch (i)
        {
            //calling appropriate choice on appropriate input
        case 1:
            enrolStuds();
            break;

        case 2:
            enterGrades();
            break;

        case 3:
            displayStuds();
            break;

        case 4:
            searchStuds();
            break;

        case 5:
            editStudGrades();
            break;

        case 6:
            dispMeritList();
            break;

        case 7:
            break;

        default:
            printf("Invalid Input!!!\n");
            break;
        }
    } while (i != 7); //condition to break
    return 0;
}

void enrolStuds()
{
    int i, j;
    char temp[50];
    int check;

    printf("Enter number of Students : ");
    scanf("%d", &nStuds); //asking number of students

    for (i = 0; i < nStuds; i++)
    {
        printf("Enter Roll No. : ");
        scanf("%d", &studArray[i].roll); //asking for roll number
        check = 1;
        while (check != 0) //checking for repeated roll no
        {
            check = 0;
            for (j = 0; j < i; j++)
            {
                if (studArray[i].roll == studArray[j].roll)
                {
                    printf("This Roll no is already registered!");
                    printf("Enter Again : ");
                    scanf("%d", &studArray[i].roll);
                    check = 1;
                    break;
                }
            }
        }

        printf("Enter First Name : ");
        scanf("%s", temp);
        while (strlen(temp) > 20)
        {
            printf("Invalid input!\nEnter Again : ");
            scanf("%s", temp);
        }
        strcpy(studArray[i].fname, temp); //assigning first name

        printf("Enter Last Name : ");
        scanf("%s", temp);
        while (strlen(temp) > 20)
        {
            printf("Invalid input!\nEnter Again : ");
            scanf("%s", temp);
        }
        strcpy(studArray[i].lname, temp); //assigning last name
    }

    // sorting according to roll number
    for (i = 0; i < nStuds; i++)
    {
        for (j = 0; j < nStuds - 1; j++)
        {
            if (studArray[j].roll > studArray[j + 1].roll)
            {
                struct student temp;
                temp = studArray[j];
                studArray[j] = studArray[j + 1];
                studArray[j + 1] = temp;
            }
        }
    }

    //printing the details
    printf("%-10s%-20s%-20s\n\n", "Roll No.", "First Name", "Last Name");
    for (i = 0; i < nStuds; i++)
    {
        printf("%-10d%-20s%-20s", studArray[i].roll, studArray[i].fname, studArray[i].lname);
        printf("\n");
    }
}

void enterGrades()
{
    int i, j;
    int check;
    float temp; //to calculate GPA

    for (i = 0; i < nStuds; i++)
    {
        //printing the details
        printf("Roll No. : %d\n", studArray[i].roll);
        printf("First Name : %s\n", studArray[i].fname);
        printf("Last Name : %s\n", studArray[i].lname);
        temp = 0;

        for (j = 0; j < 5; j++)
        {
            printf("Enter garde in Subject %d : ", j + 1);
            fflush(stdin);
            check = 1;
            while (check != 0)
            {
                scanf("%c", &(studArray[i].grades[j]));
                switch (studArray[i].grades[j])
                {
                    //adding appropriate marks to temp
                case 'E':
                    temp += 10;
                    check = 0;
                    break;

                case 'A':
                    temp += 9;
                    check = 0;
                    break;

                case 'B':
                    temp += 8;
                    check = 0;
                    break;

                case 'C':
                    temp += 7;
                    check = 0;
                    break;

                case 'D':
                    temp += 6;
                    check = 0;
                    break;

                case 'P':
                    temp += 5;
                    check = 0;
                    break;

                case 'F':
                    check = 0;
                    break;

                default:
                    check = 1;
                    break;
                }
            }
        }
        studArray[i].gpa = temp / 5; //assigning the gpa
    }

    //printing the details
    printf("%-10s%-20s%-20s%-10s\n\n", "Roll No.", "First Name", "Last Name", "GPA");
    for (i = 0; i < nStuds; i++)
    {
        printf("%-10d%-20s%-20s%-10f", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].gpa);
        printf("\n");
    }
}

void displayStuds()
{
    int i, j;

    //sorting according to names
    for (i = 0; i < nStuds; i++)
    {
        for (j = 0; j < nStuds - 1; j++)
        {
            if (strcmp(studArray[j].fname, studArray[j + 1].fname) > 0)
            {
                struct student temp;
                temp = studArray[j];
                studArray[j] = studArray[j + 1];
                studArray[j + 1] = temp;
            }

            else if (strcmp(studArray[j].fname, studArray[j + 1].fname) == 0 && strcmp(studArray[j].lname, studArray[j + 1].lname) > 0)
            {
                struct student temp;
                temp = studArray[j];
                studArray[j] = studArray[j + 1];
                studArray[j + 1] = temp;
            }
        }
    }

    //printing the details
    printf("%-10s%-20s%-20s%-10s\n\n", "Roll No.", "First Name", "Last Name", "GPA");
    for (i = 0; i < nStuds; i++)
    {
        printf("%-10d%-20s%-20s%-10f", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].gpa);
        printf("\n");
    }
}

void searchStuds()
{
    char temp[50];
    int i = 0;
    int j = 0;

    printf("Enter the string : ");
    scanf("%s", temp); //scanning the string
    while (strlen(temp) > 20)
    {
        printf("Invalid input!\nEnter Again : ");
        scanf("%s", temp);
    }

    printf("Search Result : \n");

    printf("%-10s%-20s%-20s%-10s\n\n", "Roll No.", "First Name", "Last Name", "GPA");
    for (i = 0; i < nStuds; i++)
    {
        if (strcmp(temp, studArray[i].fname) == 0 || strcmp(temp, studArray[i].lname) == 0) //checking the condition
        {
            //printing the details
            printf("%-10d%-20s%-20s%-10f", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].gpa);
            printf("\n");
            j++;
        }
    }

    if (j == 0) //if the name is not present
        printf("No Results Found!\n");
}

void editStudGrades()
{
    int r;
    int i, j;
    float temp = 0;

    printf("Enter Roll No. : ");
    scanf("%d", &r); //asking roll no.

    for (i = 0; i < nStuds; i++)
    {
        if (r == studArray[i].roll)
        {
            //printing details
            printf("%-10s%-20s%-20s%-10s\n", "Roll No.", "First Name", "Last Name", "GPA");
            printf("%-10d%-20s%-20s%-10f", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].gpa);
            printf("\n");

            printf("Grades : \n");
            for (j = 0; j < 5; j++)
            {
                printf("Subject %d : %c\n", j + 1, studArray[i].grades[j]);
            }

            printf("Enter New Grades : \n");
            for (j = 0; j < 5; j++)
            {
                printf("Subject %d : ", j + 1);
                fflush(stdin);
                int check = 1;
                while (check != 0)
                {
                    scanf("%c", &(studArray[i].grades[j])); //scanning new grades
                    switch (studArray[i].grades[j])
                    {
                        //adding appropriate marks to temp
                    case 'E':
                        temp += 10;
                        check = 0;
                        break;

                    case 'A':
                        temp += 9;
                        check = 0;
                        break;

                    case 'B':
                        temp += 8;
                        check = 0;
                        break;

                    case 'C':
                        temp += 7;
                        check = 0;
                        break;

                    case 'D':
                        temp += 6;
                        check = 0;
                        break;

                    case 'P':
                        temp += 5;
                        check = 0;
                        break;

                    case 'F':
                        check = 0;
                        break;

                    default:
                        check = 1;
                        break;
                    }
                }
            }

            studArray[i].gpa = temp / 5; //recalculating gpa

            printf("Grades Updated!\n");
            //printing new details
            printf("%-10s%-20s%-20s%-10s\n", "Roll No.", "First Name", "Last Name", "GPA");
            printf("%-10d%-20s%-20s%-10f", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].gpa);
            printf("\n");

            break;
        }
    }

    if (i == nStuds) //if the roll number is not present in list
        printf("This Roll No. is not registered!\n");
}

void dispMeritList()
{
    int i, j;

    //sorting according to the given criteria
    for (i = 0; i < nStuds; i++)
    {
        for (j = 0; j < nStuds - 1; j++)
        {
            if (studArray[j].gpa < studArray[j + 1].gpa)
            {
                struct student temp;
                temp = studArray[j];
                studArray[j] = studArray[j + 1];
                studArray[j + 1] = temp;
            }

            else if (studArray[j].gpa == studArray[j + 1].gpa && strcmp(studArray[j].lname, studArray[j + 1].lname) > 0)
            {
                struct student temp;
                temp = studArray[j];
                studArray[j] = studArray[j + 1];
                studArray[j + 1] = temp;
            }
        }
    }

    //printing details
    printf("%-10s%-20s%-20s%-10s\n\n", "Roll No.", "First Name", "Last Name", "GPA");
    for (i = 0; i < nStuds; i++)
    {
        printf("%-10d%-20s%-20s%-10f", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].gpa);
        printf("\n");
    }
}

//THANK YOU