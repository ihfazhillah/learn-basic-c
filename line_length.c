/*
 * =====================================================================================
 *
 *       Filename:  line_length.c
 *
 *    Description:  program to get length line of a file
 *
 *        Version:  1.0
 *        Created:  01/09/19 11:13:54
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



int main ( int argc, char *argv[] )
{
    int line_length = 0;
    FILE * fp = NULL;
    char character;
    fp = fopen("test.txt", "r");

    if (!fp){
        printf("An error occured when opening the file\n");
        exit(-1);
    }

    character = fgetc(fp);
    while (character != EOF){
        if(character == '\n'){
            line_length++;
        }
        character = fgetc(fp);
    }

    fclose(fp);
    fp = NULL;

    printf("the line length of file test.txt is: %d\n", line_length);

    return EXIT_SUCCESS;
}	
/* ----------  end of function main  ---------- */
