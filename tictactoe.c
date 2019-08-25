#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void drawBoard();
void checkForWin();
char markBoard(char user);
void initAnswers();

// globals
char answers[10];
char winner = 'Z';

void clear(){
    // from stack overflow
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

void main(){
    char user = 'O';

    initAnswers();

    while (winner == 'Z'){
        clear();
        drawBoard();
        user = markBoard(user);
        checkForWin();
    }
}

void printNum(int index){
    if (answers[index] == 'O' || answers[index] == 'X'){
        printf(" %c ", answers[index]);
    } else {
        printf(" %d ", answers[index]);
    }
}

void drawBoard(){
    printf("\t TicTacToe program\n\n");
    printf("Player 1 (X), Player 2 (O)\n\n\n");
    for (int i = 1; i < 10; i++){
        if (i % 3 == 0){
            printNum(i);
            printf("\n");
            if (i < 7)
                printf("----------\n");
        } else {
            printNum(i);
            printf("|");
        }
    }
    printf("\n\n");
}

char markBoard(char user){
    char nextUser = user == 'O'? 'X': 'O';
    int index;
    bool invalid = true;


    while (invalid){
        printf("Player %c [1-9]: ", user);
        scanf("%d", &index);

        // if zero
        if (index < 1 || index > 9){
            printf("Invalid move\n");
            scanf("");
            continue;
        }

        // if already filled
        if (answers[index] == 'O' || answers[index] == 'X'){
            printf("Invalid move\n");
            scanf("");
            continue;
        }

        invalid = false;
    }

    answers[index] = user;

    return nextUser;
}

void initAnswers(){
    for (int i = 1; i < 10; i++){
        answers[i] = (char) i;
    }
}

void checkForWin(){
    int indexes[8][3] = {
        {1, 2, 3},
        {1, 5, 9},
        {1, 4, 7},

        {2, 5, 8},

        {3, 6, 9},
        {3, 5, 7},

        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 8; i++){
        char j, k, l;
        j = answers[indexes[i][0]];
        k = answers[indexes[i][1]];
        l = answers[indexes[i][2]];

        if (j == k && j == l){
            winner = j;
            printf("winner is: %c\n", j);
            return; 
        }
    }

    winner =  'Z';
}
