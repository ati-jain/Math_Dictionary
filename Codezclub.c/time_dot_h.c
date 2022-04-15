#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main()
{
    int i;
    time_t x = clock();
    printf("Enter : ");
    scanf("%d", &i);
    printf("%d", x);
    printf("Enter : ");
    scanf("%d", &i);
    x = clock() - x;
    printf("%d", x);
    sleep(1);
    printf("Enter");
    return 0;
}