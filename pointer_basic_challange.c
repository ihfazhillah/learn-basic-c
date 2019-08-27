/*
 * =====================================================================================
 *
 *       Filename:  pointer_basic_challange.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  27/08/19 12:03:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
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
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    pnumber = &number;

    printf("Address of the pointer: %p\n", (void *)&pnumber);
    printf("Pointer value: %p\n", pnumber);
    printf("Value of what pointer pointing to: %d\n", *pnumber);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
