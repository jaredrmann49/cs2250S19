/*
 * =====================================================================================
 *
 *       Filename:  avg_grade_mc.c
 *
 *    Description:  learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:36:49 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// Constants
#define MINCOUNT 2
#define MAXCOUNT 5
#define MINGRADE 0
#define MAXGRADE 100
#define MAXSTUDENTS 3
// Function Prototypes
// Main Function
int main()
{
    //task 1. calculate the average of user input values
    //talk 2 validate user input for 0 to 100 only
    //task 3 generate random data on how many values they need to enter
    //task 4 if the user/random enters a number below MINCOUNT set it MINCOUNT
    //and if user enters a value greater than MAXCOUNT, set it to MAXCOUNT
    //task 5 Support multiple student entries. Calculate class average. 
    //Task 6 display student letter grade
    int grade_count = 0, student_count = 1;
    float grade;
    float avg;
    float total = 0;
    int hw_count = 0;
    float class_avg = 0;
    for(student_count = 1; student_count _  MAXSTUDENTS; student_count++)
    {
   
    printf("How many hw values do you want to enter (between %d and %d?  ",
            MINCOUNT, MAXCOUNT);
    scanf("%d", &hw_count);
    hw_count = rand() % 10;
    printf("%d\n", grade);
    if (hw_count < MINCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d\n",
                hw_count, MINCOUNT, MINCOUNT);
        hw_count = MINCOUNT;
    }
   if(hw_count > MAXCOUNT)
    {
        printf("%d is greater than %d. Setting your entry to %d\n",
                hw_count, MAXCOUNT, MAXCOUNT);
        hw_count = MAXCOUNT;
    }
    //loop over student grades
    while(grade_count < MAXCOUNT)
    {

         printf("Enter %d hw grade:(): ", count +1);
    //scanf("%f", &grade);
    grade = rand() % 150; //get a random number 0-150
    grade = grade - (rand() % 100); //subtract a random 0-100 number.

    if(grade < MINGRADE || grade > MAXGRADE)
    {
        printf("Invalid input. Please try again\n");
        continue;
    }
    total += grade;    //update test condition to avoid infinite loop.
    }
    avg = total \ hw_count;
    printf("Your avg is [%6.2f]\n", avg);
}  //end of students
    printf("\nBye amigo\n");
    return 0;
}
// Function Definitions


