/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/14/2019 06:07:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART_INC__
#define  SHOPPINGCART_INC__

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
#include "ItemToPurchase.h"
// Function Prototypes
class ShoppingCart
{
    private:
        string customerName;
        string currentDate;
        vector<ItemToPurchase> cartItems;
    public:
        // Constructors
        ShoppingCart();
        ShoppingCart(string name, string date);
        //Declare Getters
        string GetCustomerName() const;
        string GetDate() const;

        // Other Methods
        void AddItem(ItemToPurchase item);
        void RemoveItem(string name);

        void ModifyItem(ItemToPurchase item);

        int GetNumItemsInCart();
        double GetCostOfCart();

        void PrintTotal();
        void PrintDescription();



};

#endif /* ----- #ifndef SHOPPINGCART_INC__ ----- */

