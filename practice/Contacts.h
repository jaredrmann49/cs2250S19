/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
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
#ifndef  CONTACTS__INC__
#define  CONTACTS__INC__
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct ContactNode
{
char contactName[50];
char contactPhoneNum[50];
struct ContactNode* nextNodePtr;
} ContactNode;

void CreateContactNode(ContactNode*, char name[], char num[]);


void InsertContactAfter(ContactNode* current, ContactNode* next);

//insert a new node after node
ContactNode* GetNextContact(ContactNode* current);

void PrintContactNode(ContactNode* node);

void EnterInformation(ContactNode*,  int);

#endif /* ----- #ifndef CONTACTS__INC__ ----- */

