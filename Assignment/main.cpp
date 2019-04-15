/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2019 04:29:20 PM
 *       Revision:  none
 *       Compiler (C):   gcc main.cpp -o main.out -lm
 *       Compiler (C++):  g++ main.cpp -o main.out -lm
 *          Usage:  ./main.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include <iomanip>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;

// Constants

// Function Prototypes
char PrintMenu(ShoppingCart& theCart);
// Main Function
int main()
{
    string custName;
    string today;
    char menuChoice;

    cout << "Enter customer's name:" << endl;
    getline(cin, custName);

    cout << "Enter today's date:" << endl;
    getline(cin, today);
    cout << endl;

    cout << "Customer name: " << custName << endl;
    cout << "Today's date: " << today << endl << endl;

    ShoppingCart myCart(custName, today);

    menuChoice = ' ';

    while(menuChoice != 'q')
    {
        menuChoice = PrintMenu(myCart);
    }
    return 0;
}
// Function Defenitions
char PrintMenu(ShoppingCart& theCart)
{
    char menuOp;
    string name;
    string desc;
    int price;
    int quantity;

    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl << endl;

    menuOp = ' ';

    while (menuOp != 'a' && menuOp != 'd' && menuOp != 'c' &&
            menuOp != 'i' && menuOp!= 'o' && menuOp!= 'q')
    {
        cout << "Choose an option:" << endl;
        cin >> menuOp;
    }

    // switch statement on menuOp
    switch(menuOp)
    {
        case 'a':
            {
                cin.ignore();

                cout << "ADD ITEM TO CART" << endl;
            }
            break;
        case 'd':
            
                cin.ignore();

                cout << "REMOVE ITEM FROM CART" << endl;
            
            break;
    
        case 'c':
            {
                cin.ignore();

                cout << "CHANGE ITEM QUANTITY" << endl;
            }
            break;
        case 'i':
            
               cout << "OUTPUT ITEMS' DESCRIPTION" << endl;
               theCart.PrintDescription();

               menuOp = ' ';
               cout << endl;
               break;
        case 'o':
            
                cout << "OUTPUT SHOPPING CART" << endl;
                theCart.PrintTotal();

                menuOp = ' ';
                cout << endl;
                break;
            
            }
            return menuOp;



}

