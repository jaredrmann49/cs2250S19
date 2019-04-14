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
        string itemName;
        int itemPrice;
        int itemQuantity;


    public:
        ItemToPurchase();
        // Setters here
        void SetName(string name);
        void SetPrice(int price);
        void SetQuantity(int quantity);
        //Getters here. Remember to make them constants
        string GetName() const;
        int GetPrice() const;
        int GetQuantity() const;
        // Other Methods
        void Print();
};
#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

