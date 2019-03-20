/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2019 10:45:36 PM
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
#include "ShoppingCart.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    char customerName[50];
    char currentDate[50];
printf("Enter Customer's Name:\n");
scanf("%[^\n]", &customerName[50]);
printf("Enter Today's Date:\n");
scanf("%[^\n]", &currentDate[50]);
printf("\n");
printf("Customer Name: %s\n", customerName);
printf("Today's Date: %s\n", currentDate);

    return 0;
}
// Function Definitions


