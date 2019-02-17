/*
 * =====================================================================================
 *
 *       Filename:  homework4.c
 *
 *    Description:  Homework 4
 *
 *        Version:  1.0
 *        Created:  01/28/2019 01:53:19 PM
 *       Revision:  none
 *       Compiler:  gcc homework4.c -o homework4
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

int userInt;
double userDouble;
char userchar;
char userchar2;

    printf("Enter integer:\n");
    scanf("%d", &userInt);

    printf("Enter double:\n");
    scanf("%lf", &userDouble);

    printf("Enter character:\n");
    scanf(" %c", &userchar);

    printf("Enter string:\n");
    scanf(" %c", &userchar2);

    printf("%d %lf %c %c\n", userInt, userDouble, userchar, userchar2);


    return 0;
}
// Function Definitions


