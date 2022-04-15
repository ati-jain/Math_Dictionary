//Name : Atishay Jian
//Roll No. : 20CS30008
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void random_fill(int a[])
{
    for (int i = 0; i < 25; i++)
    {
        //assingning random vlaues to a[i] betwee 10 and 25
        a[i] = (rand() % 16) + 10;
    }
}
void encode(int a[])
{
    static int cypher_data[10], i = 0;
    for (int j = 0; j < 3; j++)
    {
        cypher_data[i] = cypher_data[i] + a[(3 * i) + j];
        //setting cypher_data elements as sum of three elements of plain_data
    }
    i++;
    if (i == 8)
    {
        //last element
        cypher_data[8] = a[24];
        printf("\nElements of cypher-data : \n");
        //print the elements
        for (i = 0; i < 9; i++)
        {
            printf("%d  ", cypher_data[i]);
        }
        return;
        //end the program now
    }
    //if not the end case , then call the function again (recursion)
    encode(a);
}
int main()
{
    srand(time(NULL));
    //setiing seed for rand
    int plain_data[25];
    random_fill(plain_data);
    printf("Elements of plain-data : \n");
    for (int i = 0; i < 25; i++)
    {
        printf("%d  ", plain_data[i]);
    }
    encode(plain_data);
    return 0;
}