/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  Learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:20 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringsFunc.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>     // for string manipulation operations
// Constants

// Function Prototypes

// Main Function
int main()
{
    char first[50];
    char last[50];
    char fullName[100];
    // to autoindent, while seating in one curly type: =%
    //Capture the users first nam
    printf("Enter your first and last name: ");
    //capture the users last name 
    scanf("%s %s", first, last);
    printf("Hi [%s] [%s]\n", first, last);
    strcpy(fullName, first);  // fullName = first
    strcat(fullName, " ");  // fullName = fullName 
    strcat(fullName, last);
    printf("Your full name is: [%s]\n", fullName);

    //capture the users full name


    return 0;
}
// Function Definitions


