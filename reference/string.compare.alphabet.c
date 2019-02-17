/*
 * =====================================================================================
 *
 *       Filename:  string.compare.alphabet.c
 *
 *    Description:  Compare two strings, and print in alphabetical order.
 *
 *
 *        Version:  1.0
 *        Created:  02/02/2019 04:45:12 PM
 *       Revision:  none
 *       Compiler:  gcc string.compare.alphabet.c -o string.compare.alphabet
 *
 *
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char firstString[50];
    char secondString[50];

    scanf("%s", firstString);
    scanf("%s", secondString);

if (strcmp(firstString, secondString) < 0)
{
    printf("%s", firstString);
    printf(" %s\n", secondString);
}
else
{
    printf("%s", secondString);
    printf(" %s\n", firstString);
}




    return 0;
}
// Function Definitions


