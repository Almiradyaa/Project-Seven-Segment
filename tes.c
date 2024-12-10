#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROWS 5
#define COLS 5
#define LETTERS 5

typedef struct {
    int numbers[ROWS][COLS];
} BingoCard;

int main() {
    srand(time(NULL)); // Seed the random number generator

    int numPlayers;
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    BingoCard cards[numPlayers];
    generateCards(cards, numPlayers);

    int drawnNumbers[ROWS * COLS];
    int numDrawn = 0;

    while (true) {
        int drawnNumber = drawNumber(drawnNumbers, numDrawn);
        numDrawn++;

        printf("Number drawn: %d\n", drawnNumber);

        for (int i = 0; i < numPlayers; i++) {
            markNumber(cards[i], drawnNumber);

            if (checkWin(cards[i])) {
                printf("Player %d wins!\n", i + 1);
                return 0;
            }
        }
    }

    return 0;
}

void generateCards(BingoCard cards[], int numPlayers) {
    for (int i = 0; i < numPlayers; i++) {
        for (int j = 0; j < ROWS; j++) {
            for (int k = 0; k < COLS; k++) {
                int letterIndex = k;
                int startRange = letterIndex * 15 + 1;
                int endRange = startRange + 14;

                do {
                    cards[i].numbers[j][k] = rand() % (endRange - startRange + 1) + startRange;
                } while (numberExists(cards[i], j, k, cards[i].numbers[j][k]));
            }
        }
    }
}

bool numberExists(BingoCard card, int row, int col, int number) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (card.numbers[i][j] == number) {
                return true;
            }
        }
    }
    return false;
}

int drawNumber(int drawnNumbers[], int numDrawn) {
    int randomIndex = rand() % (ROWS * COLS);
    while (drawnNumbers[randomIndex] != 0) {
        randomIndex = rand() % (ROWS * COLS);
    }
    drawnNumbers[randomIndex] = randomIndex + 1;
    return drawnNumbers[randomIndex];
}

void markNumber(BingoCard card, int number) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (card.numbers[i][j] == number) {
                card.numbers[i][j] = -1; // Mark as drawn
                break;
            }
        }
    }
}

bool checkWin(BingoCard card) {
    // Check rows
    for (int i = 0; i < ROWS; i++) {
        bool rowWin = true;
        for (int j = 0; j < COLS; j++) {
            if (card.numbers[i][j] != -1) {
                rowWin = false;
                break;
            }
        }
        if (rowWin) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < COLS; i++) {
        bool colWin = true;
        for (int j = 0; j < ROWS; j++) {
            if (card.numbers[j][i] != -1) {
                colWin = false;
                break;
            }
        }
        if (colWin) {
            return true;
        }
    }

    // Check diagonals
    bool diagonalWin1 = true, diagonalWin2 = true;
    for (int i = 0; i < ROWS; i++) {
        if (card.numbers[i][i] != -1) {
            diagonalWin1 = false;
        }
        if (card.numbers[i][ROWS - 1 - i] != -1) {
            diagonalWin2 = false;
        }
    }
    return diagonalWin1 || diagonalWin2;
}