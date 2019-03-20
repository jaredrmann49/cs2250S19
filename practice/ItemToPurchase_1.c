/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2019 11:07:09 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ItemToPurchase_1.h"
// Constants

// Function Prototypes
void MakeItemBlank(ItemToPurchase* item)
{
strcpy(item->itemName, "none");
item->itemPrice = 0;
item->itemQuantity = 0;
}

void PrintItemCost(ItemToPurchase item)
{
int total = item.itemPrice * item.itemQuantity;
printf("%s %d @ $%d = $%d\n", item.itemName, item.itemQuantity,
        item.itemPrice, total);

}

void PrintItemDescription(ItemToPurchase item)
{
    printf("%s: %s\n", item.itemName, item.itemDescription);
}




