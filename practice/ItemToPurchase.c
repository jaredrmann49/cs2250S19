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
#include "ItemToPurchase.h"
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
// Main Function
int main()
{

    return 0;
}
// Function Definitions


