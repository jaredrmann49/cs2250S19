/*
 * =====================================================================================
 *
 *       Filename:  assignment5.c
 *
 *    Description:  Peoples weights
 *
 *        Version:  1.0
 *        Created:  02/20/2019 06:24:01 PM
 *       Revision:  none
 *       Compiler:  gcc assignment5.c -o assignment5.out
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
double weight[6];
double total;
double average;
double max;
max = 0;

printf("Enter weight 1: ");
scanf("%lf",&weight[0]);
max = weight[0];


printf("Enter weight 2: ");
scanf("%lf",&weight[1]);
if (max < weight[1])
{
    max = weight[1];
}

printf("Enter weight 3: ");
scanf("%lf",&weight[2]);
if (max < weight[2])
{
    max = weight[2];
}


printf("Enter weight 4: ");
scanf("%lf",&weight[3]);
if (max < weight[3])
{
    max = weight[3];
}


printf("Enter weight 5: ");
scanf("%lf",&weight[4]);
if (max < weight[4])
{
    max = weight[4];
}


printf("%lf %lf %lf %lf %lf\n\n", weight[0], weight[1], weight[2],  weight[3],
        weight[4]);

total = weight[0] + weight[1] + weight[2] + weight[3] + weight[4];

printf("Total weight: %lf\n", total);

average =(total/5);

printf("Average weight: %lf\n", average);
printf("Max weight is: %lf\n", max);

    return 0;
}
// Function Definitions


