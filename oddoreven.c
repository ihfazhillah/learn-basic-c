#include <stdio.h>

void main(){
    int remainder, input;

    printf("input your number: ");
    scanf("%d", &input);
    remainder = input % 2;

    if(remainder == 0) 
        printf("Your number is even.\n");
    else
        printf("Your number is odd.\n");
}
