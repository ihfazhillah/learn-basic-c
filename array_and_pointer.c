/*
 * =====================================================================================
 *
 *       Filename:  array_and_pointer.c
 *
 *    Description:  In this script, I will learn how to use pointer and array. How its
 *                  related, and some array aritmathics.
 *
 *        Version:  1.0
 *        Created:  28/08/19 05:46:28
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
#include <string.h>

/* example function process array with array */
int sum_array(int array[], int size){
    int sum = 0, *ptr;
    int * const end_array = array + size;

    for (ptr = array; ptr < end_array; ptr++)
        sum += *ptr;
    
    return sum;
}
/*  example function process array with pointer notation */
int sum_pointer(int * array, int size){
    int sum = 0;
    int * const end_array = array + size;

    for (; array < end_array; array++)
        sum += *array;
    
    return sum;
}

/* example function to get the length of string using pointer */
int lengthstr(const char * ptr){
    const char * ptr2 = ptr;

    while(*ptr2)
        ptr2++;
    return ptr2 - ptr;
}

int main ( int argc, char *argv[] )
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -19};
    
    printf("using sum_array function: %d\n", sum_array(array, 10));
    printf("using sum_pointer function: %d\n", sum_pointer(array, 10));

    char a_string[] = "Hello my name is ihfazh";
    printf("using strlen function: %d\n", strlen(a_string));
    printf("using lengthstr function: %d\n", lengthstr(a_string));
    return EXIT_SUCCESS;
}	
/* ----------  end of function main  ---------- */

