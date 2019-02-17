/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  Tempurature
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:41:25 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float -lm
 *
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
const int CELSIUS = 0;
const int FAHRENHEIT = 1;
#define BOIL_CEL 100
#define BOIL_FAHR 212 //both const and #define can be used for constants
#define FREEZE_CEL 0
#define FREEZE_FAHR 32

// Constants

// Function Prototypes

// Main Function
int main()
{

double in_temp, out_temp
int choice;
int is_boil = 0, is_liquid
//For floats us the %f placeholder
//For doubles us the %lf placeholder
printf("Welcome to the tempurature calculator\n");
printf("Please enter your choice:\n");
printf("\t0 for celsius or 1 for Fahrenheit: ");
scanf("%d", &choice);

//Now take user imput
if(choice == 1)
{
    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &in_temp);
//convert from celsius to Fahrenheit
    out_temp = (in_temp * 9.0/5) + 32;
    printf("Your temperature in Fahrenheit is: %lf\n", out_temp);
}
else if (choice == 1)
{
    printf("Enter the temerature in Fahrenheit: ");
    scanf("%lf", &in_temp);
    //convert from Fahrenheit to celsius
    out_temp = (in_temp - 32) * 5.0/9.0

}

else
{
  
    printf("Sorry, you did not enter 0 or 1\nAdios amigo\n");

}
//Test for boiling point, freezing point, and liquid point
if(out_temp >= BOIL_FAHR)
{
    printf("Your water is boiling\n");
}
else






//printf("What is the temperature in Ogden now in Celsius: ");
// use %f to capture float information
//  use %lf to capture double information
//scanf("%f", &temp);
//Convert from Celsius to Fahrenheit
//f_temp = (temp * 9/5) + 32;
//printf("I see, your temp is %lf in Fahrenheit.\n",f_temp);








    return 0;
}
// Function Definitions


