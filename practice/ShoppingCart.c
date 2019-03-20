/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2019 05:58:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ShoppingCart.h"
#include <string.h>
// Constants

// Function Prototypes

ShoppingCart AddItem(ShoppingCart cart, ItemToPurchase item)
{
}

ShoppingCart RemoveItem(ShoppingCart name, char[] name)
{
}

ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart)
{
}

int GetNumItemsInCart(ShoppingCart cart)
{
}

int GetCostOfCart(ShoppingCart cart)
{
}

void PrintTotal(ShoppingCart cart)
{
}

void PrintDescriptions(ShoppingCart cart)
{
    printf("OUTPUT ITEMS' DESCRIPTIONS\n");
    printf("%s's Shopping Cart - %s\n", customerName, currentDate);
    
    scanf("%[^\n]", &customerName[50]);
}

void PrintMenu(ShoppingCart cart)
{
    printf("MENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output shopping cart\n");
    printf("q - Quit\n");
    printf("\n");
    printf("Choose an option:\n");
return;
}
// Main Function


