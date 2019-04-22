/*
 * =====================================================================================
 *
 *       Filename:  ContactNode.h
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
#ifndef  CONTACTNODE_INC__
#define  CONTACTNODE_INC__

#include <string>
using namespace std;

class ContactNode
{
    private:
        string contactName;
        string contactPhoneNum;
        ContactNode* nextNodePtr;

    public:
        // Default Constructor
        ContactNode();
        // Param based Constructor
        ContactNode(string initName, string initPhoneNum,
                ContactNode* nextLoc = 0);
        // Getters
        string GetName() const;
        string GetPhoneNumber() const;
        // other methods
        ContactNode* GetNext();
        void InsertAfter(ContactNode* nodePtr);
        void PrintContactNode();
};

#endif

