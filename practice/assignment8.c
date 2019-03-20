/*
 * =====================================================================================
 *
 *       Filename:  assignment8.c
 *
 *    Description:  Finish homework assignment M8
 *
 *        Version:  1.0
 *        Created:  03/11/2019 09:04:09 PM
 *       Revision:  none
 *       Compiler:  gcc assignment8.c -o assignment8.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Constants

// Function Prototypes
int GetNumOfCharacters(const char userphrase[])
{
int numofchar = 0;
for (int i = 0; userphrase[i] != '/0'; i++)
{
    if (userphrase[i] != ' ')
    {
        numofchar++;
    }
}
    return numofchar;
}
// Main Function
int main()
{
char phrase[100];

printf("Enter a sentence or phrase: \n");
scanf("%[^\n]", phrase);
printf("%s\n", phrase);
printf("Number of characters: %d\n", GetNumOfCharacters(phrase));

    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumOfCharacters
 *  Description:  Get the number of characters in a string
 * =====================================================================================
 */

GetNumOfCharacters(const char phrase[INPUT_SIZE])
