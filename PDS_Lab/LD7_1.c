#include <stdio.h>
struct customer
{
    char name[21];     //name of the customer
    char add[21];      //address of the customer
    long long int mob; // mobile number  of the customer
};

struct sales
{
    int cn;            //for customer number
    int item_code[10]; //for item code
    int number[10];    //for number of items
    int amount[10];    //amount of each item
    char date[15];     //for date
};

void register_customer(struct customer *new, int n) //function to register a new customer
{
    printf("Enter Your Name : ");
    fflush(stdin);     //clearing the input buffer
    gets((*new).name); //scanning the name
    printf("Enter Your Address :");
    fflush(stdin);
    gets((*new).add); //scanning the address
    printf("Enter Your mobile number : ");
    scanf("%llu", &((*new).mob)); //scanning the mobile number
    printf("\nRegistered Successfully!\n");
    printf("Details :- \n");
    //printing the details of the(*new) customer
    printf("Name : %s\n", (*new).name);
    printf("Address : %s\n", (*new).add);
    printf("Mobile No. : %llu\n", (*new).mob);
    printf("Customer Number (CN) : %d\n", n);
}

void list_customer(struct customer *list, int n) //function to print all the customers registered
{
    int i;
    printf("Details of all custmers : \n\n");
    for (i = 0; i < n; i++) //running the for loop from index 0 to n-1
    {
        //printing the details of each customer
        printf("Name : %s \n", list[i].name);
        printf("Address : %s \n", list[i].add);
        printf("Mobile No. : %llu\n", list[i].mob);
        printf("Customer Number (CN) : %d\n\n", i);
    }
}

void make_order(struct sales *trans, int n)
{
    int cn;    //decalring local cn
    int i = 1; //to count the number of items
    printf("Enter your CN : ");
    scanf("%d", &((*trans).cn)); //scanning cn
    printf("Enter 0 as number of items to stop ordering\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number of items :");
        scanf("%d", &((*trans).number[i]));
        if (((*trans).number[i]) == 0)
        {
            break;
        }
        printf("Enter Item-Code : ");
        scanf("%d", &((*trans).item_code[i]));
        printf("Enter the amount : ");
        scanf("%d", &((*trans).amount[i]));
    }
    printf("Enter date (dd-mm-yy) : ");
    fflush(stdin);
    gets((*trans).date);
}

void display_sale(struct sales *list, int n)
{
    int cn; // declaring a local cn
    int i, j;
    printf("Enter the Customer Number (CN) : ");
    scanf("%d", &cn);
    for (i = 0; i < n; i++)
    {
        printf("Orders :-\n\n");
        if (list[i].cn == cn)
        {
            for (j = 0; j < 10; j++)
            {
                if (list[i].number[j] == 0)
                    break;
                printf("Date : %s\n", list[i].date);
                printf("Item code : %d\n", list[i].item_code[j]);
                printf("Number of items : %d\n", list[i].number[j]);
                printf("Amount : Rs. %d\n\n", list[i].amount[j]);
            }
        }
    }
}

int main()
{
    char c;                            //declaring a char to scan which function to perform
    struct customer customer_list[20]; //declaring an array of structres to store customer info
    struct sales sale_list[500];       //for storing the transactoins
    int i = 0;                         //index of the array of customers
    int j = 0;                         //index of sale array
    printf("------------Welcome------------\n");
    do
    {
        //printing the general instruction
        printf("\nEnter Your choice :\n");
        printf("'r' for Registering a new customer\n");
        printf("'l' to show the list of customer\n");
        printf("'s' to make a order\n");
        printf("'d' to show the sales\n");
        printf("'e' to end\n");
        scanf(" %c", &c); //scanning the character c
        //calling different functions based on c
        switch (c)
        {
        case 'r':
        case 'R':
            //calling the function to register customer
            register_customer(&customer_list[i], i); //passing the address of the first unfilled element of  struct array and its index
            i++;
            break;
        case 'l':
        case 'L':
            list_customer(customer_list, i); //passing the struct array and the number of elements we have to print
            break;
        case 's':
        case 'S':
            make_order(&sale_list[j], j); //passing the list and the index as its argument
            j++;
            break;
        case 'd':
        case 'D':
            display_sale(sale_list, j); //passing the list and the number of elements in it
        }
    } while (c != 'e' && c != 'E'); //end the loop when 'e' is  entered
    printf("Thank You!!!");
    return 0;
}