/*
 * =====================================================================================
 *
 *       Filename:  reverse_text.c
 *
 *    Description:  print text file in reverse order
 *
 *        Version:  1.0
 *        Created:  01/09/19 13:49:22
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
    FILE *fp = NULL;
    int length = 0;
    char ch;
    fp = fopen("test.txt", "r");
    fseek(fp, 0, SEEK_END);
    length = ftell(fp);

    while (length >= 0){
        if ((ch=fgetc(fp)) != EOF){
            printf("%c", ch);
        }

        length = length - sizeof(char);
        fseek(fp, length, SEEK_SET);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}	
/* ----------  end of function main  ---------- */
