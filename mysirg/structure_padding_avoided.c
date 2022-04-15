#include <stdio.h>
#pragma pack(1) //apply packing to all structures simulatanously

struct str1
{
    int a;                 //4 byte
    char c;                //1 byte
    double d;              //8 byte
} __attribute__((packed)); //applying packing to this struct specifically
                           //so total 13 bytes

struct str2
{
    int a;    //4 bytes
    double d; //8 bytes
    char c;   //1 byte
};            //total 13 bytes

int main()
{
    printf("Size of int : %d\n", sizeof(int));
    printf("Size of char : %d\n", sizeof(char));
    printf("Size of double : %d\n", sizeof(double));
    printf("Size of str 1 : %d\n", sizeof(struct str1));
    printf("Size of str 2 : %d", sizeof(struct str2));
    return 0;
}