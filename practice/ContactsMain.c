/*
 * =====================================================================================
 *
 *       Filename:  ContactsMain.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2019 11:15:05 PM
 *       Revision:  none
 *       Compiler:  gcc
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


