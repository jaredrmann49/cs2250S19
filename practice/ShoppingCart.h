/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2019 04:57:14 PM
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
#include "ItemToPurchase_1.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct ShoppingCart_struct
{
const int CART_MAX_SIZE = 10;
char customerName[50];
char currentDate[50];
int cartSize;

ItemToPurchase cartItems[10];

}ShoppingCart;

ShoppingCart AddItem(ShoppingCart cart, ItemToPurchase item);

//ShoppingCart RemoveItem(ShoppingCart name, char[] name);

ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart);

int GetNumItemsInCart(ShoppingCart cart);

int GetCostOfCart(ShoppingCart cart);

void PrintTotal(ShoppingCart cart);

void PrintDescriptions(ShoppingCart);

void PrintDescriptions(ShoppingCart cart);



#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

