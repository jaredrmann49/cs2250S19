/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  Working with arrays
 *
 *        Version:  1.0
 *        Created:  02/07/2019 10:05:24 AM
 *       Revision:  none
 *       Compiler:  gcc arrays.c -o arrays,out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM 3
// Function Prototypes

// Main Function
int main()
{
    //arrays use index notation to access members
    int grades[NUM]; // array of size NUM = 3
    for(int i = 0; i < NUM; i++)
    {
        printf("Enter a number: ");
        scanf("%d", grades[i]); //Do not use the address (&) operator
        //make sure you specify the index position in brackets []
    }
    print("First number is [%d]\n", grades[0]);


    return 0;
}
// Function Definitions


