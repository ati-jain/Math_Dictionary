#include<stdio.h>

int main()
{
    int pass;
    printf("Enter the number of subjects that you have passed in : \n {Maths : 1 \n Science : 2\n Both Science And Maths : 3} \n ");
    scanf("%d", &pass);
    if(pass == 3)
    printf("Congratulations ! You have won Rs 45!");
    else if(pass == 1)
    printf("Congratulations ! You have won Rs 15!");
    else if(pass == 2)
    printf("Congratulations ! You have won Rs 15!");
    else
    printf("Invalid Input");
}