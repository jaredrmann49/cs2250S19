/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *
 *    Description:  Get the distance travelled by a ball 
 *    when it is dropped from a building. Initial velocity = 0.
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:06:37 AM
 *       Revision:  none
 *       Compiler:  gcc ballDropped.c -o ballDropped -lm
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double GRAVITY = 9.8; //ms^2
const double BUILDING = 500;
// Function Prototypes

// Main Function
int main()
{

    // Formula: s = 0.5 g t^2
    double time = 0;
    double distance = 0;
    double fromGround = 0;
    //Take user input: Time travelled
    printf("Enter the time in seconds: ");
    scanf("%lf", &time);
    //Display distance
    distance = 0.5 * GRAVITY * pow(time, 2);
    
    printf("After %lf seconds, your ball travelled %lf meters\n",
            time, distance);
    
    fromGround = BUILDING - distance;
    printf("The ball is %lf meters from the ground\n", fromGround);



    return 0;
}
// Function Definitions


