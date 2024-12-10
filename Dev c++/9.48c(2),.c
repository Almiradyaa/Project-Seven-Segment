#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NUM_PLAYERS 2
#define CARD_ROWS 5
#define CARD_COLS 5
#define MAX_NUMBERS 75

void initializeDeck(bool deck[MAX_NUMBERS]);
void drawNumber(bool deck[MAX_NUMBERS], int *drawnNumbers, int *drawCount);
void generateCard(int card[CARD_ROWS][CARD_COLS], bool deck[MAX_NUMBERS]);
void printCard(int card[CARD_ROWS][CARD_COLS]);
bool checkWin(int card[CARD_ROWS][CARD_COLS]);
void markNumber(int card[CARD_ROWS][CARD_COLS], int number);

int main() {
    srand(time(NULL)); 


    bool deck[MAX_NUMBERS] = {false};
    initializeDeck(deck);


    int drawnNumbers[MAX_NUMBERS] = {0};
    int drawCount = 0;


    int players[NUM_PLAYERS][CARD_ROWS][CARD_COLS];


    for (int i = 0; i < NUM_PLAYERS; i++) {
        generateCard(players[i], deck);
        printf("Player %d's Card:\n", i + 1);
        printCard(players[i]);
        printf("\n");
    }

    
    while (drawCount < MAX_NUMBERS) {
        drawNumber(deck, drawnNumbers, &drawCount);
        printf("Drawn Number: %d\n", drawnNumbers[drawCount - 1]);

        
        for (int i = 0; i < NUM_PLAYERS; i++) {
            markNumber(players[i], drawnNumbers[drawCount - 1]);
            if (checkWin(players[i])) {
                printf("Player %d wins!\n", i + 1);
                return 0;
            }
        }


        for (int i = 0; i < NUM_PLAYERS; i++) {
            int inputNumber;
            printf("Player %d, enter a number to mark (1-75): ", i + 1);
            scanf("%d", &inputNumber);
            markNumber(players[i], inputNumber);
            if (checkWin(players[i])) {
                printf("Player %d wins by marking their own number!\n", i + 1);
                return 0;
            }
        }
    }

    printf("No winner this time!\n");
    return 0;
}

void initializeDeck(bool deck[MAX_NUMBERS]) {
    for (int i = 0; i < MAX_NUMBERS; i++) {
        deck[i] = false; 
    }
}

void drawNumber(bool deck[MAX_NUMBERS], int *drawnNumbers, int *drawCount) {
    int number;
    do {
        number = rand() % MAX_NUMBERS + 1; 
    } while (deck[number - 1]); 

    deck[number - 1] = true; 
    drawnNumbers[*drawCount] = number; 
    (*drawCount)++;
}

void generateCard(int card[CARD_ROWS][CARD_COLS], bool deck[MAX_NUMBERS]) {
    for (int col = 0; col < CARD_COLS; col++) {
        int rangeStart = col * 15 + 1;
        int rangeEnd = rangeStart + 14;
        bool used[15] = {false}; 

        for (int row = 0; row < CARD_ROWS; row++) {
            int num;
            do {
                num = rand() % (rangeEnd - rangeStart + 1) + rangeStart;
            } while (used[num - rangeStart] || deck[num - 1]); 

            used[num - rangeStart] = true; 
            card[row][col] = num;
        }
    }

    card[2][2] = -1; 
}

void printCard(int card[CARD_ROWS][CARD_COLS]) {
    printf(" B   I   N   G   O\n");
    for (int row = 0; row < CARD_ROWS; row++) {
        for (int col = 0; col < CARD_COLS; col++) {
            if (card[row][col] == -1) {
                printf(" *   "); 
            } else {
                printf("%2d   ", card[row][col]);
            }
        }
        printf("\n");
    }
}

void markNumber(int card[CARD_ROWS][CARD_COLS], int number) {
    for (int row = 0; row < CARD_ROWS; row++) {
        for (int col = 0; col < CARD_COLS; col++) {
            if (card[row][col] == number) {
                card[row][col] = -1; 
                return;
            }
        }
    }
}

bool checkWin(int card[CARD_ROWS][CARD_COLS]) {
	
    for (int i = 0; i < CARD_ROWS; i++) {
        bool rowWin = true;
        bool colWin = true;
        
        for (int j = 0; j < CARD_COLS; j++) {
            if (card[i][j] != -1 && card[i][j] != -2) rowWin = false;
            if (card[j][i] != -1 && card[j][i] != -2) colWin = false;
        }
        
        if (rowWin || colWin) return true;
    }

    bool diagWin1 = true, diagWin2 = true;
    
    for (int i = 0; i < CARD_ROWS; i++) {
        if (card[i][i] != -1 && card[i][i] != -2) diagWin1 = false;
        if (card[i][CARD_ROWS - i - 1] != -1 && card[i][CARD_ROWS - i - 1] != -2) diagWin2 = false;
    }

    return diagWin1 || diagWin2;
}
