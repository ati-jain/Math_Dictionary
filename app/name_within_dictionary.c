#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[15];
int len;
char name2[15];
int fact(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
        fact = fact * i;
    return fact;
}
void arrg(char name[])
{
    strcpy(name2, name);
    strlwr(name);
    strlwr(name2);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (name2[j] < name2[i])
            {
                name2[j] = name2[j] + name2[i];
                name2[i] = name2[j] - name2[i];
                name2[j] = name2[j] - name2[i];
            }
        }
    }
}

int terms(char name[])
{
    int term = fact(len);
    arrg(name);
    int x = 1;
    for (int i = 0; i < len; i++)
    {
        if (name2[i] == name2[i + 1])
        {
            x++;
            term = term / x;
        }
        else
            x = 1;
    }
    return term;
}
// int place(char name[])
// {
//     int place = 1;
//     for (int i = 0; i < len; i++)
//     {
//         printf("i : %d\n", i);
//         for (int j = 0; j < len - i; j++)
//         {
//             if (name2[j] != name[i])
//             {
//                 char rem[len-i];
//                 for (int k = 0; k < j; k++)
//                 {
//                     rem[k] = name2[k];
//                 }
//                 for (int k = j + 1; k < len - i; k++)
//                 {
//                     rem[k-1] = name2[k];
//                 }
//                 rem[len - 1 - i] = '\0';
//                 printf(" rem : ~%s~\n",rem);
//                 place = place + terms(rem);
//                 free(rem);
//             }
//             else
//             {
//                 for (int k = j; k < len - i; k++)
//                 {
//                     name2[k] = name2[k + 1];
//                 }
//                 printf("name2 : ~%s~\n", name2);
//                 goto end;
//             }
//         }
//     end:
//         place = place;
//     }
//     return place;
// }
int place()
{
    int p = 1;
    for (int i = 0; i < len; i++)
    {
        if (name2[i] == name[i])
            ;
        else
        {
            for (int j = i; j < len; j++)
            {
                if (name2[j] == name[i])
                {
                    goto end;
                }
                else
                {
                    char rem[15];
                    for (int k = j; k <= len; k++)
                    {
                        rem[k - j] = name2[k];
                    }
                    p = p + terms(rem);
                }
            }
        }
    end:
        p = p;
    }
    return p;
}

void main()
{
    printf("Enter Your name : ");
    scanf("%s", name);
    len = strlen(name);
    printf("%s\n", name);
    printf("There will be %d words in the dictionary containing all the letters of your Name.\n", terms(name));
    printf("Your name will come on %dth place in that dictionary", place());
    scanf("%c", name);
    scanf("%c", name);
}