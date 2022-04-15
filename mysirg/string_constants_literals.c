#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *p;
    p = (char *)malloc(sizeof(char) * 30); //we decalred a char pointer and allocated space to it
    printf("%d\n", p);                     //we are seeing the value of p(address)
    strcpy(p, "this is a string");         //we are copying the string in this, no problem
    printf("%d\n", p);
    p = "This is another string"; //we are pointing p to a string literal(constant)
    printf("%d\n", p);            //so its value got changed(adderess) and it beocmes const char*
    char c[30];
    strcpy(c, "this is a string");
    printf("%s\n", c);
    printf("%s\n", p); //p will the print the  string as in line 11
    if (p == NULL)
        printf("Exit\n");
    else
        printf("not\n");
    // p[5] = 'd';                   //as p is constant we cant change its elements , it will give terminate the program
    // strcpy(p, c);                 // same
    p = c; // now we pointed p to a str c which is a variable
    printf("%s\n", p);
    p[5] = 'd'; //now p is not pointng to a string literal so we can change its value
    printf("%s\n", p);
    printf("Exit Successfully");
    return 0;
}