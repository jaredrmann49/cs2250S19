/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  Calculate the caresian coordinates based on
 *    the radius and theta angle (degrees)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:35:45 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constantss.
const double PI = 3.14159;
// Function Prototypes

// Main Function
int main()
{
    double radius, theta, x_pos, y_pos;


    //1. Capture user input for radius angle and theta in(degrees)
    printf("Enter your radius: ");
    scanf("%lf",  &radius);
    printf("Enter your theta angle in degrees: ");
    scanf("%lf",  &theta);
    //2. Convert the theta angle to radians
    theta = (theta*PI/180.0);
    //3. calculate your cartesian coordinates
    x_pos = radius*cos(theta);
    y_pos = radius*sin(theta);
    //%.2
    //4. print the result
    
    printf("Your cartesian coordinates, x = [%06.2lf]/n", x_pos);
    printf("Your cartesian coordinates, y = [%06.2lf]/n", y_pos);
    





    return 0;
}
// Function Definitions


