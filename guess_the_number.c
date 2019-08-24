#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){
    time_t t;
    srand((unsigned) time(&t));
    int random_number = rand() % 21;
    int guessed_number, live = 5;

    while (1) {
        for (;live > 0; --live){
            printf("Guess the number game.\n");
            printf("Please enter number between 0 - 20: ");
            scanf("%d", &guessed_number);

            if (guessed_number == random_number) break;
            if (guessed_number > 20 || guessed_number < 0){
                printf("Please fill with the correct number, 0 - 20.\n");
                printf("Your current number is: %d\n", guessed_number);
                break;
            }
            if (guessed_number > random_number) 
                printf("Your number too large\n");
            if (guessed_number < random_number)
                printf("Your number too low\n");

            printf("Live: %d\n", live);

        }

        if (live == 0){
            printf("Mission failed. You're died.\n");
        } else {
            printf("Mission completed\n");
        }
        break;
    }
}
