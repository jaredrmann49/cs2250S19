/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an emplohee structure for record keeping
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:10:06 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out -lm
 *       Usage:     ./employee.out
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


// Constants
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
    double taxRate;
    double grossPay;
} Employee;

#define TAXRATE1 0.10   //10%
#define TAXRATE1 0.25   //25%
#define TAXRATE1 0.75   //75%
// Function Prototypes
double CalcNet(Employee emp); //pass by value
double CalcGross(Employee* emp); // pass by reference
// Main Function
//

int main(int argc, char* argv[])
{
    double netPay = 0;
    Employee waldo = {1, 7.50, 20}
    netPay = CalcNet(waldo);
    printf("Hi Waldo, your net pay for %lf hours at %lf rate is %lf\n",
            waldo.hours, waldo.payRate, netPay);
    // Set tax rate
    waldo.taxRate = TAXRATE1;
    waldo.grossPay = CalcGross(&waldo);
    printf("Hi Waldo, your gross pay for %lf hours at %lf rate is %lf\n", 
            waldo.hours, waldo.payRate, waldo.grossPay);
    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcNet
 *  Description:  Calculate the net pay based on payRate and hours
 *  Param: Employee structure
 *  Return: Net Pay as double
 * =====================================================================================
 */
double CalcNet(Employee emp); //pass by value
{
    return emp.payRate * emp.hours;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcGross
 *  Description:  Calculate the gross pay based on payRate and hours
 *  Param: Employee structure
 *  Return: Gross Pay as double
 * =====================================================================================
 */
double CalcGross(Employee* emp); // pass by reference
{// To access structure members when using a pointer (address)
 // use the dereference operator "->"
    return emp->payRate * emp->hours * (1 - emp->taxRate);
}
