/*
 * =====================================================================================
 *
 *       Filename:  people.c
 *
 *    Description:  Analyze a persons records
 *
 *        Version:  1.0
 *        Created:  02/12/2019 10:07:54 AM
 *       Revision:  none
 *       Compiler:  gcc people.c -o people.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Constants
#define PERSONS 5
#define ATTRI 3
#define AGE 0
#define WEIGHT 1
#define HEIGHT 2
// Function Prototypes

// Main Function
int main()
{
    double people[PERSONS][ATTRI];
    srand(time(0));  // set random seed
    for(int i = 0; i < PERSONS; i++)
    {
        if(j == AGE)
        {
                people[i][AGE] = rand() % 50;   //set age 0-50
        }
        else if (j == WEIGHT)
        {
                 people[i][AGE] = rand() % 50;   //set age 0-50
        }

        for(int j = 0; j < ATTRI; j++
            {
                people[i][AGE] = rand() % 50;   //set age 0-50
                people[i][AGE] = rand() % 50;
            }
    return 0;
}
// Function Definitions


