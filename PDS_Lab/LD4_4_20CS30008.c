#include <stdio.h>
int main()
{
    unsigned int n, i, j, same = 0;
    int c1, c2;
    printf("Enter the number of students : ");
    scanf("%u", &n);
    unsigned int roll[n];
    float cgpa[n], avg = 0;
    for (i = 0; i < n; i++) //Entering the values
    {
        printf("Enter the roll no. : ");
        scanf("%u", &roll[i]);
        printf("Enter CGPA : ");
        scanf("%f", &cgpa[i]);
        avg = avg + cgpa[i]; // calculating the sum for average
    }
    avg = avg / n;                        // calculating average cgpa
    printf("\nDetails of Students : \n"); //printing the details
    for (i = 0; i < n; i++)
    {
        printf("%u ) Roll No. : %u\n", i + 1, roll[i]);
        printf("CGPA : %0.2f\n", cgpa[i]);
    }
    printf("\nAverage CGPA : %0.2f \n\n", avg);
    printf("Students having same CGPA :\n");
    for (i = 0; i < n; i++)
    {
        c1 = cgpa[i] * 100;
        for (j = i + 1; j < n; j++)
        {
            c2 = cgpa[j] * 100; // for comparing to two digits precision
            if (c1 == c2)       // if the cgpa is same
            {
                printf("Roll No. %u and %u have same CGPA of %0.2f\n", roll[i], roll[j], cgpa[i]);
                same++;
            }
        }
    }
    if (same == 0) //if cgpa is not same for any two students
        printf("No two students have same CGPA");
    return 0;
}