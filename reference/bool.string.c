/*
 * =====================================================================================
 *
 *       Filename:  bool.string.c
 *
 *    Description: Write an if-else statement that uses a string, and 
 *    the command strcmp
 *
 *        Version:  1.0
 *        Created:  02/02/2019 04:25:38 PM
 *       Revision:  none
 *       Compiler:  gcc bool.string.c -o bool.string
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
    char userString[50];

    scanf("%s", userString);
if (strcmp(userString, "Quit") ==0)
{
    printf("Goodbye\n");
}
else
{
    printf("Hello\n");
}


    return 0;
}
// Function Definitions


