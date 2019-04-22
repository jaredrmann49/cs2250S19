/*
 * =====================================================================================
 *
 *       Filename:  ContactNode.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/21/2019 08:30:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

#include "ContactNode.h"


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ContactNode
 *  Description:  Default constructor. This constructor will Not set any data
 * =====================================================================================
 */

        ContactNode::ContactNode()
{
    this->contactName = "";
    this->contactPhoneNum = "";
    this->nextNodePtr = 0;
        
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ContactNode
 *  Description:  Default constructor. This constructor sets the object's values
 *  string initName
 *  string initPhoneNum
 *  ContactNode* nextLoc
 * =====================================================================================
 */
        ContactNode::ContactNode(string initName, string initPhoneNum,
                ContactNode* nextLoc)
{
    this->contactName = initName;
    this->contactPhoneNum = initPhoneNum;
    this->nextNodePtr = nextLoc;
        
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertAfter
 *  Description:  Insert a node after the last one
 * =====================================================================================
 */

void ContactNode::InsertAfter(ContactNode* nodePtr)
{
    // here you may use a temprary pointer (see below)
    // ContactNode* tmpNext = 0;
    // or directlly use the current object (this->) to
    // link it to the nodePrt, and setting notePrt->nextNodePtr to NULL
    //
    this->nextNodePtr = nodePtr;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetName
 *  Description:  Return the contact's name
 * =====================================================================================
 */

      string  ContactNode::GetName() const
{

    return this->contactName;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetPhoneNumber
 *  Description:  Return the phone number
 * =====================================================================================
 */

        string ContactNode::GetPhoneNumber() const
{

    return this->contactPhoneNum;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNext
 *  Description:  Get the next pointer
 * =====================================================================================
 */

        ContactNode* ContactNode::GetNext()
        {

            return this->nextNodePtr;
        }

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintContactNode
 *  Description:  Print Contact Node information
 * =====================================================================================
 */

void ContactNode::PrintContactNode()
{
    cout << "Name: " << this->contactName << endl;
    cout << "Phone number: " << this->contactPhoneNum << endl;
    return;
}
