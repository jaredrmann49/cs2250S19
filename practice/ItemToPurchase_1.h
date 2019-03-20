/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  :
 *
 *        Version:  1.0
 *        Created:  03/16/2019 11:06:33 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE_INC__
#define  ITEMTOPURCHASE_INC__

typedef struct ItemToPurchase_struct
{
char itemDescription[50];
char itemName[50];
int itemPrice;
int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item);

void PrintItemCost(ItemToPurchase item);

void PrintItemDescription(ItemToPurchase item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

