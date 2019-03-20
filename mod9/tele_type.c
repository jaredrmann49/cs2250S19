/*
 * =====================================================================================
 *
 *       Filename:  tele_type.c
 *
 *    Description:  First look into LinkedList
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:03:16 AM
 *       Revision:  none
 *       Compiler:  gcc tele_type.c -o tele_type.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants
#define MAXNAME 30
#define MAXPHONE 30




typedef struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct TeleType* nextaddr; //address of a structure TeleType should be 
                               //the last member of your structure
}Tele;
// Function Prototypes
void DisplayTele(Tele* content);

// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Acme, John", "(801) 891-23-44"};
    Tele t2 = {"Martinez, Tino", "(801) 567-23-44"};
    Tele t3= {"Bunny, Bugs", "(801) 891-23-44"};
    Tele* first;   // pointer (address) to structure

    first = &t1; // get the address of a tele structure
    t1.nextaddr = &t2; // set the address of the next structure
    t2.nextaddr = &t3; // set the address of NULL, last member
    t3.nextaddr = NULL;  // set the address of NULL, last member
    //Display linked list info
    DisplayTele(first);
   // printf("%s\n%s\n", (*first).name, (*first).phoneNum); 
    return 0;
}
// Function Definitions

void DisplayTele(Tele* content)
{
    while(content != NULL)
    {
    printf("%-30s %-20s\n", content->name, content->phoneNum);
    content = content->nextaddr;
    }
}
