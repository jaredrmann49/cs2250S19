/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2019 07:11:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Contacts.h"

// Constants

// Function Prototypes

// Main Function
void CreateContactNode(ContactNode* node, char name[], char num[])
{
    strcpy(node->contactName, name);
    strcpy(node->contactPhoneNum, num);
    node->nextNodePtr = NULL;
}


void InsertContactAfter(ContactNode* current, ContactNode* next)
{
    ContactNode* temp = NULL;
    temp = current->nextNodePtr;
    current->nextNodePtr = next;
    next->nextNodePtr = temp;
}
//insert a new node after node

ContactNode* GetNextContact(ContactNode* current)
{
return current->nextNodePtr;
}

void PrintContactNode(ContactNode* node)
{
    printf("Name: %s\n", node->contactName);
    printf("Phone number: %s\n\n", node->contactPhoneNum);

}

void EnterInformation(ContactNode* node, int number)
{
    
    char temp[50];
    char temp2[50];
    printf("Person %d\n", number);
    printf("Enter name:\n");
    scanf("%[^\n]", temp);
    printf("Enter phone number:\n");
    scanf("%[^\n]", temp2);
    printf("You entered: %s, %s\n\n",temp, temp2);

    CreateContactNode(node, temp, temp2);
}

// Function Definitions


