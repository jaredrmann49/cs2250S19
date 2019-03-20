/*
 * =====================================================================================
 *
 *       Filename:  seats.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/14/2019 09:09:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SEATS__INC__
#define  SEATS_INC__

typedef struct Seat_struct 
{
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;


#endif /* ----- #ifndef SEATS__INC__ ----- */

