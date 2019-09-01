/*
 * =====================================================================================
 *
 *       Filename:  dynamic_allocation.c
 *
 *    Description:  Learn dynamic allocation
 *
 *        Version:  1.0
 *        Created:  28/08/19 10:04:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Ihfazhillah (), mihfazhillah@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



int main ( int argc, char *argv[] )
{
    char * string = NULL;
    int maxsize;

    printf("Enter your max string to be displayed: ");
    scanf("%d", &maxsize);

    string = (char *)malloc(maxsize * sizeof(char));

    if (string != NULL){

        printf("Enter the string. We will display all string until maxsize reached:\n");
        scanf(" ");
        fgets(string, maxsize, stdin);

        printf("your text is:\n");
        printf("%s\n", string);

    }

    free(string);
    string = NULL;
    return EXIT_SUCCESS;
}	
/* ----------  end of function main  ---------- */
