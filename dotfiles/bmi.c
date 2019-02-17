/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:29 AM
 *       Revision:  none
 *       Compiler:  gcc. bmi.c -o bmi
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
    int weight = 0;
    int height = 0;
    int bmi = 0;

bmi = weight/height**2;
    //1) Capture user imput: weight (kg) and height (meters)
printf(" Enter your weight in kg\n",);
scanf("%d", &weight);
printf("Enter your height in meters: \n");
scanf("%d", &height);
//2) Calculate BMI
bmi = weight/(height * height);
//3) Display BMI
printf("With %d kg and %d meters, your BMI is %d\n", weight, height, bmi);
printf("Done\n");
//
printf("Done\n");

    return 0;
}
// Function Definitions


