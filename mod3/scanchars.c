/*
 * =====================================================================================
 *
 *       Filename:  scanchars.c
 *
 *    Description:  Take multiple chars as input
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:40:52 AM
 *       Revision:  none
 *       Compiler:  gcc scanshars.c -o scanchars.out
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

    char cIn;

    printf("Enter a character: ");
    scanf(" %c", &cIn);
    printf("You entered [%c]\n", cIn);

    //Note: When capturing chars, use an extra space 
    //in your scanf function. e.g. " %c"
    //this will help you capture the extra ENTER key
    printf("Enter a character: ");
    scanf("%c", &cIn);
    printf("You entered [%c]\n", cIn);


    return 0;
}
// Function Definitions


