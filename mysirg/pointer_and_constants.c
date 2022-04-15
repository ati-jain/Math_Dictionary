#include <stdio.h>
int main()
{
    int x = 5, y = 6;
    int *p1;
    p1 = &x; //variable pointer to a variable
    p1 = &y; //valid
    *p1 = 5; //valid
    const int cx = 10, cy = 12;
    const int *p2;
    p2 = &cx; //variable pointer to const int;
    p2 = &cy; //valid;
    // *p2 = 10;        //invalid
    int *const p3 = &x; //constant pointer to a varible
    // p3 = &y;         //invalid;
    *p3 = 12;                  //valid
    const int *const p4 = &cx; //constant pointer to a constant
    // p4 = &cy;               //invalid
    // *p4 = 12;               //invalid
    return 0;
}