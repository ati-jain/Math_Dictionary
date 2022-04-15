#include <stdio.h>
int main()
{
    int n, i, j, same = 0;
    printf("Enter the number of students (less than 10) : ");
    scanf("%d", &n);
    int marks[n], age[n], roll[n]; // declaring the arrays of required size
    for (i = 0; i < n; i++)        // Entering the values
    {
        printf("Enter Roll No. : ");
        scanf("%d", &roll[i]);
        printf("Enter Age : ");
        scanf("%d", &age[i]);
        printf("Enter Marks : ");
        scanf("%d", &marks[i]);
    }
    printf("\nStudents with same age : \n\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (age[i] == age[j]) //if age is same
            {
                printf("Roll : %d   Age : %d    Mark : %d\n", roll[i], age[i], marks[i]);
                printf("Roll : %d   Age : %d    Mark : %d\n\n", roll[j], age[j], marks[j]);
                same++;
            }
        }
    }
    if (same == 0)
        printf("No two students have same age\n");
    same = 0; // for using it for same marks
    printf("\nStudents with same marks :\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (marks[i] == marks[j]) //if marks are same
            {
                printf("Roll : %d   Age : %d    Mark : %d\n", roll[i], age[i], marks[i]);
                printf("Roll : %d   Age : %d    Mark : %d\n\n", roll[j], age[j], marks[j]);
                same++;
            }
        }
    }
    if (same == 0)
        printf("No two students have same marks");

    return 0;
}