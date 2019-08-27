/*
 * =====================================================================================
 *
 *       Filename:  pointer_basic.c
 *
 *    Description:  Learn pointer basic
 *
 *        Version:  1.0
 *        Created:  27/08/19 11:53:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ihfazhillah, 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    int number = 10;
    int *pnumber = &number;

    printf("The current number is: %d\n", number);
    printf("Saved on the address: %p\n", pnumber);
    printf("accessing number from pointer: %d\n", *pnumber);


    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
