/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  Item to purchase
 *
 *        Version:  1.0
 *        Created:  04/12/2019 04:29:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__
#include <string>
using namespace std;


class ItemToPurchase
{
    private:
        string itemDescription;
        string itemName;
        int itemPrice;
        int itemQuantity;

    public:
        ItemToPurchase();
        ItemToPurchase(string name, string desc, int price, int quantity);
        // Setters here
        void SetName(string name);
        void SetDescription(string desc);
        void SetPrice(int price);
        void SetQuantity(int quantity);
        //Getters here. Remember to make them constants
        string GetName() const;
        string GetDescription() const;
        int GetPrice() const;
        int GetQuantity() const;
        // Other Methods
        void PrintItemCost();
        void PrintItemDescription();
        
        

};
#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

