#include <stdio.h>
int main()
{
    if (printf("Hello\n") && 0)
    {
        //dont come inside
    }
    while (printf("while"))
        return 0; //infact semicolon is used but with void main and if block only we can do the job
}