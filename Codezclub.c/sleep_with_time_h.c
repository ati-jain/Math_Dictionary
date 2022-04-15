#include <time.h>
#include <stdio.h>
void sleep(int n)
{
    clock_t t = clock();
    while (((clock() - t) / CLOCKS_PER_SEC) < n)
        ;
}
int main()
{
    printf("Start\n");
    sleep(5);
    printf("End after 5 sec");
    return 0;
}