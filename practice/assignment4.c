/*
 * =====================================================================================
 *
 *       Filename:  assignment4.c
 *
 *    Description:  Auto service assignment
 *
 *        Version:  1.0
 *        Created:  02/05/2019 03:38:22 PM
 *       Revision:  none
 *       Compiler:  gcc assignment4.c -o assignment4.out
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
char serv_oil[50];
char serv_change[50];
//char serv_tire;
//char serv_rotation;
//char serv_car;
//char serv_wash;
//char userservice2[50];
//char userservice3[50];

    printf("Enter desired auto service: \n");
    scanf(" %s", serv_oil);
    scanf(" %s", serv_change);
    printf("You entered: %s %s \n", serv_oil, serv_change);

    return 0;



}
// Function Definitions


