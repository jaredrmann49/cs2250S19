/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/14/2019 06:08:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "ItemToPurchase.h"
#include <iostream>
#include "ShoppingCart.h"
using namespace std;

// Function Prototypes

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShoppingCart
 *  Description:  Default Constuctor
 * =====================================================================================
 */
ShoppingCart::ShoppingCart()
{
    customerName = "none";
    currentDate = "January 1, 2016";
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShoppingCart
 *  Description:  Constructor with name and date parameters
 * =====================================================================================
 */
ShoppingCart::ShoppingCart(string name, string date)
{
    customerName = name;
    currentDate = date;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCustomerName
 *  Description: Return customer name 
 * =====================================================================================
 */
string ShoppingCart::GetCustomerName() const
{
    return customerName;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetDate
 *  Description:  Return currentDate
 * =====================================================================================
 */
string ShoppingCart::GetDate() const
{
    return currentDate;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  Add item object to cartItems vector
 * =====================================================================================
 */
void ShoppingCart::AddItem(ItemToPurchase item)
{
   cartItems.push_back(item); 
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  Remove item from vector
 * =====================================================================================
 */
void ShoppingCart::RemoveItem(string name)
{
    unsigned i = 0;
    unsigned posItem;
    unsigned cartSize;
    bool found;

    posItem = 0;
    cartSize = cartItems.size();
    found = false;
    ItemToPurchase item;

    //Loop over vector to search for name
    for(i = 0; i < cartSize; ++i)
    {
        item = cartItems.at(i);
        if(item.GetName() == name)
        {
        cartItems.erase(cartItems.begin() + i);
        found = true;
        cartItems.resize(cartSize - 1);
        break;
        }
        //  For example to get the name, use: cartItems.at(i).GetName()
    }

    if(!found)
    {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
    //Shrink vector
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ModifyItem
 *  Description:  Modify existing item
 * =====================================================================================
 */
void ShoppingCart::ModifyItem(ItemToPurchase item)
{
    unsigned i;
    ItemToPurchase currItem;
    bool found = false;
     
    for(i = 0; i < cartItems.size(); ++i)
    {
        currItem = cartItems.at(i);
        if(currItem.GetName() == item.GetName())
        {
            // Check if it is name is not "none"
            if(currItem.GetName() != "none")
            {
                if(currItem.GetPrice() != 0 && currItem.GetQuantity() != 0)
                {
                    currItem.SetQuantity(item.GetQuantity());
                    currItem.SetPrice(item.GetPrice());
                    found = true;
                    break;
                }

            
            // Check if it the price is not 0
            
            // Check if the qty is not 0
            }
        }
    }
    if(!found)
    {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumItemsInCart
 *  Description:  Return the number of items in the cart
 * =====================================================================================
 */
int ShoppingCart::GetNumItemsInCart()
{
    int items = 0;
    for(int i = 0; i < cartItems.size(); i++)
    {
        items += cartItems.at(i).GetQuantity();

    }
    return items;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCostOfCart
 *  Description:  Get the cost of the car. Loop over the cart items 
 *  and add up the cost
 * =====================================================================================
 */
double ShoppingCart::GetCostOfCart()
{
    int i = 0;
    int totalCost = 0;
    ItemToPurchase item;

    for(i = 0; i < cartItems.size(); ++i)
    {
        item = cartItems.at(i);
        totalCost += (item.GetQuantity() * item.GetPrice());
    }
    return totalCost;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  Print Cart Total
 * =====================================================================================
 */
void ShoppingCart::PrintTotal()
{
    unsigned i;
    int totalCost;

    totalCost = 0;

    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;

    if(cartItems.size() > 0)
    {
        for(i = 0; i < cartItems.size(); ++i)
        {
            cartItems.at(i).PrintItemCost();
        }
    }
    else
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    totalCost = GetCostOfCart();
    cout << endl << "Total: $" << totalCost << endl;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintDescriptions
 *  Description:  Print item cart descriptions
 * =====================================================================================
 */

void ShoppingCart::PrintDescription()
{
    unsigned i;

    cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
    cout << "Item Descriptions" << endl;

    if(cartItems.size() > 0)
    {
        for(i = 0; i < cartItems.size(); ++i)
        {
            cartItems.at(i).PrintItemDescription();
        }
    }
    else
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
}
