/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/21/2019 08:30:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>
#include "ContactNode.h"
using namespace std;

// Main program


// Constants

// Function Prototypes

// Main Function
int main()
{

    string fullName;
    string phoneNum;
    ContactNode* headContact = 0;
    ContactNode* nextContact1 = 0;
    ContactNode* nextContact2 = 0;
    ContactNode* currContact = 0;

    cout << "Person 1" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;
    
    headContact = new ContactNode(fullName, phoneNum);

    cout << "Person 2" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;
    
    nextContact1 = new ContactNode(fullName, phoneNum);
    headContact->InsertAfter(nextContact1);
    //Create a new contact here with "new"
    // Use the insertAgter to connect the two nodes
    //


    // Get third person
    //
    cout << "Person 3" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;
    
    nextContact2 = new ContactNode(fullName, phoneNum);
    nextContact1->InsertAfter(nextContact2);

    //Create a new contact here with "new"
    // Use the insertAgter to connect the two nodes
    //

    cout << "CONTACT LIST" << endl;
//
//
// Loop over contacts
while (currContact != 0)
{
    currContact->PrintContactNode();
    currContact = currContact->GetNext();
    cout << endl;
}

    return 0;
}
// Function Definitions


