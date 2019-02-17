/*
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  Guess the random number
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:00 AM
 *       Revision:  none
 *       Compiler:  gcc guessNumber.c -o guessNumber.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //use for the function//srand and rand
#include <time.h>
// Constants
#define MAX 5
#define LIMIT 100
// Function Prototypes

// Main Function
int main()
{
    int number, guess;
    srand(time(0));//set the random SEED
    guess = rand() % LIMIT; //
    for(int i = 0; i < MAX; i++)//before C89 you need to define i outside loop
    {
        printf("Please guess a number between 0 and %d\n", LIMIT);
        printf("You have %d opportunities left\n", MAX - 1);
        scanf("%d", &number);
        if(number > guess)
        {
            printf("Go lower\n");
        }
        else if (number < guess)
        {
            printf("Go higher\n");
        }
        else

        {
            
        if(number == guess)
        {
            printf("Congratulations, you got the correct number\n");
            return 0;
        }
    }
        printf("Sorry, you didnt guess the [%d] number\nplay againi", guess);


    return 0;
}
// Function Definitions


