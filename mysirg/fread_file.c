#include <stdio.h>
int main()
{
    FILE *p;
    char c;
    p = fopen("mybinfile.dat", "rb");
    while (fread(&c, 1, 1, p) != 0)
        printf("%c", c);
    return 0;
}