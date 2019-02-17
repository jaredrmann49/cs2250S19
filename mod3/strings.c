/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn to use strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:22 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -o strings
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int SIZE = 50;

// Function Prototypes

// Main Function
int main()
{

    // A string is a list/collection of characters (array)
    // Strings use %s as the placeholder
    char fName[SIZE];
    char lName[SIZE];
    printf("Please enter your name: ", SIZE);
    // When using arrays, do not use the address (&) operator
    scanf("%s", fName);
    printf("Hi [%s]\n", fName);


    return 0;
}
// Function Definitions


