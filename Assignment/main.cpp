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
using namespace std;

// Constants

// Function Prototypes

// Main Function
int main()
{
    int i;
    const int NUM_ITEMS = 2;
    string name;
    int price;
    int quantity;
    int total = 0;
    ItemToPurchase item1;
    ItemToPurchase item2;

    for (i = 0; i < NUM_ITEMS; ++i)
    {
        cout << "Item " << i + 1 << endl;
        cout << "Enter the item name:" << endl;
        cin.ignore(1000, '\n');
        getline(cin, name);


        cout << "Enter the item price;" << endl;
        cin >> price;

        cout << "Enter the item quantity:" << endl;
        cin >> quantity;
        cout << endl;


        // Set the Object values for 1
        if(i == 0)
        {
              item1 =  ItemToPurchase();
              item1.SetName(name);
              item1.SetPrice(price);
              item1.SetQuantity(quantity);
              total += (price * quantity);
        }
        // Set the Object values for 2
        else
        {
            item2 = ItemToPurchase();
              item2.SetName(name);
              item2.SetPrice(price);
              item2.SetQuantity(quantity);
              total += (price * quantity);
        }


        cin.ignore();
    }
    

    // Calculate the total
    

    // Print Total
    cout << "TOTAL COST" << endl;
    item1.Print();
    item2.Print();
    cout << endl;
    cout << "Total: $" << total << endl;


    return 0;
}
// Function Definitions


