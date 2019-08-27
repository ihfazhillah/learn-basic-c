#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void main(){
    char str1[100];
    printf("Enter a string, I will reverse it for you:\n");
    scanf("%s", str1);
    int size = strlen(str1);

    for (;size >= 0; size--)
        printf("%c", str1[size]);

    printf("\n-----------------------------\n");
    printf("simple bubble sort:\n");

    char str[3][100];
    char str_temp[100];
    for (int i = 0; i < 3; i++){
        printf("%d> ", i + 1);
        scanf("%s", str[i]);
    }


    bool swapped = false;

    for (int i = 1; i <= 3; i++){
        for (int j = 0; j <= i-1; j++){
            if (strcmp(str[j], str[j+1]) > 0){
                // swap here
                strcpy(str_temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], str_temp);
            }
        }
    }


    for (int i = 0; i < 3; i++)
        printf("%s\n", str[i]);

}

