#include <stdio.h>
//We are having 64 bit processor
//it means 8 bytes will be read at a time by the processor
//one word will be read by processor
//length of word is equal to size of the largest element
struct str1
{             //word = 8 byte
    int a;    //4 byte
    char c;   //1 byte
              //3 bytes space so that double d will be read in a single processor cycle
    double d; //8 byte
};            //so total 16 bytes

struct str2
{             //word = 8 byte
    int a;    //4 bytes
              //4 bytes space so that double d will be read in a single processor cycle
    double d; //8 bytes
    char c;   //1 byte
              //but 8 bytes are read a time, so complete 8 bytes will be stored for it
};            //total 24 bytes

struct str3
{           //word = 1 byte
    char c; //1 byte
    char d; //1 byte
};          //total 2 byte

struct str4
{ //word = 4 byte
    int a;
    char c;
    int b;
    int d;
    char ch;
};

int main()
{
    printf("Size of int : %d\n", sizeof(int));
    printf("Size of char : %d\n", sizeof(char));
    printf("Size of double : %d\n", sizeof(double));
    printf("Size of str 1 : %d\n", sizeof(struct str1));
    printf("Size of str 2 : %d\n", sizeof(struct str2));
    printf("Size of str 3 : %d\n", sizeof(struct str3));
    printf("Size of str 4 : %d\n", sizeof(struct str4));
    return 0;
}