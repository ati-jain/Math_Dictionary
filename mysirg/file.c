#include <stdio.h>
int main()
{
    FILE *p;
    char c[20];
    printf("Enter a string : ");
    gets(c);
    p = fopen("mybinfile.dat", "wb");
    fwrite(c, sizeof(c), 1, p);
    fclose(p);
    return 0;
}