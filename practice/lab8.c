/*
 * =====================================================================================
 *
 *       Filename:  lab8.c
 *
 *    Description:  lab8 assignment
 *
 *        Version:  1.0
 *        Created:  03/16/2019 11:04:00 AM
 *       Revision:  none
 *       Compiler:  gcc lab8.c ItemsToPurchase.c -o lab8.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
ItemToPurchase inventory[2];

printf("Enter the item name:\n");
scanf("%[^\n]", inventory[0].itemName);
printf("Enter the item price:\n");
scanf("%d", &inventory[0].itemPrice);
printf("Enter the item quantity:\n");
scanf("%d", &inventory[0].itemQuantity);
fflush(stdin);
printf("Enter the item name:\n");
scanf("%[^\n]", inventory[1].itemName);
printf("Enter the item price:\n");
scanf("%d", &inventory[1].itemPrice);
printf("Enter the item quantity:\n");
scanf("%d", &inventory[1].itemQuantity);

PrintItemCost(inventory[0]);
PrintItemCost(inventory[1]);
printf("\n");
int total = inventory[0].itemPrice * inventory[0].itemQuantity;
total = total + (inventory[1].itemPrice * inventory[1].itemQuantity);
printf("Total $%d", total);


    return 0;
}
// Function Definitions


