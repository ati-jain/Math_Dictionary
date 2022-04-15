#include <stdio.h>
int main()
{
    int len;
    char sing[25], plural[25];
    printf("Enter the word : ");
    scanf("%s", sing);
    for (len = 0; sing[len] != '\0'; len++) //length of string will be found
        plural[len] = sing[len];            //coying singular to plural
    //but plural is not null terminated
    if (sing[len - 1] == 'y') //if the word ends with 'y'
    {
        plural[len - 1] = 'i'; // removing 'y' and adding 'ies'
        plural[len] = 'e';
        plural[len + 1] = 's';
        plural[len + 2] = '\0'; //ending the array with null character
    }
    else if (sing[len - 1] == 's' || ((sing[len - 2] == 'c' || sing[len - 2] == 's') && sing[len - 1] == 'h')) //if the word ends with "s" or "ch" or "sh"
    {
        plural[len] = 'e'; //adding 'es'
        plural[len + 1] = 's';
        plural[len + 2] = '\0';
    }
    else //in all other cases
    {
        plural[len] = 's'; // adding 's'
        plural[len + 1] = '\0';
    }
    printf("Plural of %s is %s", sing, plural);
    return 0;
}