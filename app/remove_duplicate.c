#include <stdio.h>
void sort(int *a, int b)
{
    int n;
    for (int j = 0; j < b; j++)
    {
        n = a[j];
        for (int i = j + 1; i < b; i++)
        {
            if (a[i] < n)
            {
                n = a[i] + n;
                a[i] = n - a[i];
                n = n - a[i];
            }
        }
        a[j] = n;
    }
}
int main()
{
    int a;
    printf("Enter the number of entries : ");
    scanf("%d", &a);
    int b[a];
    printf("Enter the vlaues\n");
    for (int i = 0; i < a; i++)
        scanf("%d", &b[i]);
    sort(b, a);
    printf("\nAfter removing the duplicate");
    for (int i = 0; i < a; i++)
    {
        if (b[i] != b[i + 1])
            printf("\n%d", b[i]);
    }
    printf("\nPress Enter to continue\n");
    scanf("%c",&a);
    scanf("%c",&a);
    return 0;
}