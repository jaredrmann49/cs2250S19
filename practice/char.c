/*
 * =====================================================================================
 *
 *       Filename:  char.c
 *
 *    Description:  Practicing with characters
 *
 *        Version:  1.0
 *        Created:  01/28/2019 01:33:55 PM
 *       Revision:  none
 *       Compiler:  gcc char.c -o char
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{


    //out put a character z
    char userchar;
    char userstring;


    printf("Enter a character:\n");
    scanf("%c",& userchar);
    printf("%c", userchar);


    // Create a string saying Howdy
    printf("Enter a string saying Howdy:\n");
    scanf("%c", &userstring);
    printf("%c\n", userstring);


    return 0;
}
// Function Definitions


