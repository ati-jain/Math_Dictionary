#include<stdio.h>
int main()
{
    int a =2;
    int *pnt = &a;
    printf("%x\n",pnt);
    printf("%x\n",pnt+1);
    printf("%x\n",--pnt);
    printf("%d\n",pnt);
    printf("%d\n",pnt+1); 
    printf("%d\n",--pnt);
    int array[3]={1,2,3};
    //array is a pointer but we cant use any operation on it like addition and substraction
    int* ptr = array; //same as &array[0]
    printf("the first value in the array is %d\n",array[0]);
    printf("the first value in the array is %d\n",*array);
    printf("the first value in the array is %d\n",*&array[0]);
    printf("the first value in the array is %d\n",*ptr);
    ptr++;//cant be done on array
    printf("the second value in the array is %d\n",array[1]);
    printf("the second value in the array is %d\n",*(array+1));
    printf("the second value in the array is %d\n",*(&array[0]+1));
    printf("the second value in the array is %d\n",*ptr);
    return 0;
}