#include <stdio.h>
#include <string.h>
char name[15];
int len;
char name2[15];
int fact(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void 
int terms(char name[])
{
    int terms = 1;
    char name2[len +1]
    terms = fact(strlen(c));
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
    return terms;
}
int dic(char name[])
{
    strlwr(name);
    int n = strlen(name);
    int ans = 1;
    char name2[n + 1];
    strcpy(name2, name);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (name2[j] < name2[i])
            {
                name2[j] = name2[j] + name2[i];
                name2[i] = name2[j] - name2[i];
                name2[j] = name2[j] - name2[i];
            }
        }
    }
    puts(name2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (name2[j] == name[i])
            {
                ans = ans + j * fact(n - 1 - i);
                for (int k = j; k < n; k++)
                {
                    name2[k]=name2[k+1];
                }
                
            }
        }
    }

    return ans;
}
int main()
{
    char c;
    printf("Enter Your name here : ");
    scanf("%s", name);
    len = strlen (name);
    printf("Your Entered name is : ");
    puts(name);
    printf("There will be %d words in the dictionary containing all the letters in your name\n", terms(name));
    printf("Your name will come on %d th number\n", dic(name));
    scanf("%c", &c);
    scanf("%c", &c);
    return 0;
}