#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fact(int a)
{
    int f = 1;
    for (int i = 1; i <= a; i++)
        f = f * i;
    return f;
}
void sort(char *s)
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] < s[i])
            {
                char c;
                c = s[j];
                s[j] = s[i];
                s[i] = c;
            }
        }
    }
}
int terms(char *s)
{
    int n = strlen(s);
    int t = fact(n);
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            x++;
            t = t / x;
        }
        else
            x = 1;
    }
    return t;
}
int place(char *o, char *s)
{
    int n = strlen(o), p = 1;
    char temp[20];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (o[i] == s[j])
            {
                for (int k = j; k > i; k--)
                {
                    s[k] = s[k - 1];
                }
                s[i] = o[i];
                break;
            }
            else if (j == i || s[j] != s[j - 1])
            {
                strcpy(temp, s + i);
                for (int k = j - i; k < n - i; k++)
                {
                    temp[k] = temp[k + 1];
                }
                p = p + terms(temp);
            }
        }
    }
    return p;
}
int main()
{
    char name[20], sname[20];
    printf("xxxx~~~~  Name In Dictionary  ~~~~xxxxx\n");
    printf("Enter your name : ");
    scanf("%s", name);
    strlwr(name);
    strcpy(sname, name);
    sort(sname);
    printf("Sorted name : %s\n", sname);
    printf("Total no. of words : %d\n", terms(sname));
    printf("Your name will come on %d place\n", place(name, sname));
    printf("Press Enter to continue");
    scanf("%c", name);
    scanf("%c", name);
    return 0;
}