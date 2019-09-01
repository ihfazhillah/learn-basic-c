/*
 * =====================================================================================
 *
 *       Filename:  to_uppercase.c
 *
 *    Description:  A program to convert file text into uppercase, if its lowercase, substract by 32
 *
 *        Version:  1.0
 *        Created:  01/09/19 11:34:37
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
#include <string.h>
#include <ctype.h>

#define TestFile "test.txt"
#define TempFile "temp.txt"


int main ( int argc, char *argv[] )
{
    FILE *fp = NULL, *ftemp = NULL;
    char ch;

    fp = fopen(TestFile, "r");
    ftemp = fopen(TempFile, "w");

    if (!fp){
        printf("file didn't open for some reason\n");
        return -1;
    }

    if (!ftemp){
        printf("file didn't open for some reason\n");
        return -1;
    }

    while ((ch=fgetc(fp)) != EOF){
        if (islower(ch)){
            fputc(ch - 32, ftemp);
        } else {
            fputc(ch, ftemp);
        }
    }

    fclose(fp);
    fclose(ftemp);
    fp = NULL;
    ftemp = NULL;

    remove(TestFile);
    rename(TempFile, TestFile);

    fp = fopen(TestFile, "r");

    while((ch=fgetc(fp)) != EOF){
        printf("%c", ch);
    }

    printf("\n");
    fclose(fp);
    fp = NULL;

    return EXIT_SUCCESS;
}	
/* ----------  end of function main  ---------- */
