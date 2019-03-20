/*
 * =====================================================================================
 *
 *       Filename:  hello_func.c
 *
 *    Description:  Practice functions
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:48:20 AM
 *       Revision:  none
 *       Compiler:  gcc hello_func.c -o hello_func.out
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello_World();
void Hello_Number(int num);
int Get_Square(int num);
int Get_Number();
// Main Function
int main(int argc, char* argv[])
{
    int i1 = 23;
    Hello_World();

    Hello_Number(i1);

    i1 = Get_Square(i1);
    Hello_Number(i1);

    i1 = Get_Number()
        Hello_Number(i1);

    return 0;
}
// Function Definitions


void Hello_World()
{
    printf("Hello World\n");
    return;
}

void Hello_Number()
{
    printf("Hola %d number\n", num);
    return;
}

int Get_Square(int num)
{
    int square;
    //Algorithm
    square = num * num;
   
    return square;
}

int Get_Number()
{
    int input;
    // Algorithm
    printf("Please enter an int value: ");
    scanf("%d", &input);
    return input;
}


