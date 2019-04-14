/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2019 04:29:20 PM
 *       Revision:  none
 *       Compiler (C++): g++ ItemToPurchase.cpp -o ItemToPurchase.out -lm
 *       Usage:  ./ItemToPurchase.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;
#include "ItemToPurchase.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ItemToPurchase
 *  Description:  Constructor for Item to purchase.
 *  Set itemName = "none"
 *  itemPrice = 0, and itemQuantity = 0
 * =====================================================================================
 */
ItemToPurchase::ItemToPurchase()
{
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetName
 *  Description:  Set the name variable
 * =====================================================================================
 */
void ItemToPurchase::SetName(string name)
{
    itemName = name;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetPrice
 *  Description:  Set the purchase price
 * =====================================================================================
 */
void ItemToPurchase::SetPrice(int price)
{
   itemPrice = price;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetQuantity
 *  Description:  Set the item quantity
 * =====================================================================================
 */
void ItemToPurchase::SetQuantity(int quantity)
{
    itemQuantity = quantity;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetName
 *  Description:  Get the name variable
 * =====================================================================================
 */
string ItemToPurchase::GetName() const
{
    return itemName;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetPrice
 *  Description:  Get the Purchase price
 * =====================================================================================
 */
int ItemToPurchase::GetPrice() const
{
    return itemPrice;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetQuantity
 *  Description:  Get the item quantity
 * =====================================================================================
 */
int ItemToPurchase::GetQuantity() const
{
    return itemQuantity;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Print
 *  Description:  Print Item Purchased
 * =====================================================================================
 */

void ItemToPurchase::Print()
{
    cout << itemName << " " << itemQuantity << " @ $"
        << itemPrice << " = $" << itemPrice * itemQuantity << endl;
}
