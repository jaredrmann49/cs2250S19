/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2019 10:45:36 PM
 *       Revision:  none
 *       Compiler:  gcc main.c Contacts.c -o main.out -lm
 *
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "Contacts.h"
//#include "ShoppingCart.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    ContactNode* Head = NULL;
    ContactNode* Item = NULL;
    ContactNode* Tail = NULL;
    
    Head = (ContactNode*)malloc(sizeof(ContactNode));
    EnterInformation(Head, 1);

    Item = (ContactNode*)malloc(sizeof(ContactNode));
    EnterInformation(Item, 2);
    InsertContactAfter(Head, Item);

    Tail = (ContactNode*)malloc(sizeof(ContactNode));
    EnterInformation(Tail, 3);
    InsertContactAfter(Item, Tail);
   
    printf("CONTACT LIST\n");
    ContactNode* curr = Head;
    while(curr != NULL)
    {
        PrintContactNode(curr);
       curr = GetNextContact(curr);
    }

    return 0;


}
// Function Definitions


