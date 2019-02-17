/*
 * =====================================================================================
 *
 *       Filename:  bool.teenager.c
 *
 *    Description: Using bool to assign true or false
 *
 *        Version:  1.0
 *        Created:  02/02/2019 03:41:18 PM
 *       Revision:  none
 *       Compiler:  gcc bool.teenager.c -o bool.teenager
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    bool isRed;
    bool isBalloon;

    isRed = false;
    isBalloon = false;

    if (!(isRed) && (isBalloon))
{
    printf("balloon\n");
}

else if ((isRed) && (isBalloon))
{
    printf("Red balloon\n");
}

else if (!(isRed) && !(isBalloon))
{
    printf("Not a balloon\n");
}

else if ((isRed) && !(isBalloon))
{
    printf("Not a balloon\n");
}
    return 0;
}
// Function Definitions


