/*
 * =====================================================================================
 *
 *       Filename:  pointer_as_reference.c
 *
 *    Description:  Learn how to mimic pass as reference using pointer in c
 *
 *        Version:  1.0
 *        Created:  28/08/19 09:14:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Ihfazhillah (), mihfazhillah@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void square (const int * x){
    printf("Square of %d is %d\n", *x, *x * *x);
}

int main ( int argc, char *argv[] )
{
    int number = 4;
    square(&number);
    return EXIT_SUCCESS;
}	
/* ----------  end of function main  ---------- */


