// DITA AYODYA AL MIRA - D121241008
// NOMOR 9.48 BAGIAN A

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CARDS 52        // Jumlah maksimum kartu
#define MAX_PLAYERS 2       // Jumlah pemain
#define MAX_HAND_SIZE 10    // Ukuran maksimum tangan pemain

// Prototipe fungsi
void initializeDeck(int deck[]);
void shuffleDeck(int deck[]);
void dealCard(int deck[], int *deckIndex, int playerHand[], int *handSize);
int calculateScore(int hand[], int handSize);
void displayHand(int hand[], int handSize);
void playGame();

int main() {
    srand(time(NULL)); // Mengatur seed untuk generator angka acak
    char playAgain = 'Y';

    while (toupper(playAgain) == 'Y') {
        playGame(); // Memulai permainan
        printf("Apakah Anda ingin bermain lagi? (Y/N): ");
        scanf(" %c", &playAgain); // Meminta pengguna untuk bermain lagi
    }

    printf("Terima kasih telah bermain! Selamat tinggal!\n");
    return 0;
}

// Fungsi untuk menginisialisasi dek kartu
void initializeDeck(int deck[]) {
    for (int i = 0; i < MAX_CARDS; i++) {
        deck[i] = i % 13 + 1; // Kartu diwakili oleh angka 1-13
    }
}

// Fungsi untuk mengacak dek kartu
void shuffleDeck(int deck[]) {
    for (int i = 0; i < MAX_CARDS; i++) {
        int j = rand() % MAX_CARDS; // Indeks acak
        // Menukar kartu
        int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

// Fungsi untuk memberikan kartu ke tangan pemain
void dealCard(int deck[], int *deckIndex, int playerHand[], int *handSize) {
    playerHand[*handSize] = deck[*deckIndex]; // Memberikan kartu
    (*handSize)++; // Meningkatkan ukuran tangan
    (*deckIndex)++; // Beralih ke kartu berikutnya dalam dek
}

// Fungsi untuk menghitung skor tangan pemain
int calculateScore(int hand[], int handSize) {
    int score = 0;
    int aces = 0;

    for (int i = 0; i < handSize; i++) {
        if (hand[i] > 10) { // Kartu gambar dihitung sebagai 10 poin
            score += 10;
        } else if (hand[i] == 1) { // Penanganan Ace
            aces++;
            score += 11; // Anggap Ace bernilai 11 poin terlebih dahulu
        } else {
            score += hand[i]; // Tambahkan nilai kartu
        }
    }

    // Sesuaikan nilai Ace jika skor melebihi 21
    while (score > 21 && aces > 0) {
        score -= 10; // Hitung Ace sebagai 1 alih-alih 11
        aces--;
    }

    return score;
}

// Fungsi untuk menampilkan tangan pemain
void displayHand(int hand[], int handSize) {
    for (int i = 0; i < handSize; i++) {
        printf("%d ", hand[i]);
    }
}

// Fungsi untuk memainkan permainan Blackjack
void playGame() {
    int deck[MAX_CARDS];
    initializeDeck(deck); // Menginisialisasi dek kartu
    shuffleDeck(deck); // Mengacak dek kartu

    int playerHands[MAX_PLAYERS][MAX_HAND_SIZE] = {0}; // Tangan untuk setiap pemain
    int handSizes[MAX_PLAYERS] = {0}; // Ukuran tangan masing-masing pemain

    int deckIndex = 0;

    // Memberikan dua kartu awal kepada setiap pemain
    for (int player = 0; player < MAX_PLAYERS; player++) {
        dealCard(deck, &deckIndex, playerHands[player], &handSizes[player]);
        dealCard(deck, &deckIndex, playerHands[player], &handSizes[player]);
        
        printf("Tangan awal Pemain %d: ", player + 1);
        displayHand(playerHands[player], handSizes[player]);
        printf(" | Skor: %d\n", calculateScore(playerHands[player], handSizes[player]));
    }

    // Memungkinkan pemain untuk meminta tambahan kartu atau tetap pada tangan mereka
    for (int player = 0; player < MAX_PLAYERS; player++) {
        char choice;
        do {
            printf("Pemain %d, apakah Anda ingin mengambil kartu tambahan? (Y/N): ", player + 1);
            scanf(" %c", &choice);

            if (toupper(choice) == 'Y') {
                dealCard(deck, &deckIndex, playerHands[player], &handSizes[player]);
                printf("Tangan baru Pemain %d: ", player + 1);
                displayHand(playerHands[player], handSizes[player]);
                printf(" | Skor: %d\n", calculateScore(playerHands[player], handSizes[player]));

                if (calculateScore(playerHands[player], handSizes[player]) > 21) {
                    printf("Pemain %d busts!\n", player + 1);
                    break;
                }
            }
        } while (toupper(choice) == 'Y');
        
        printf("\n");
    }

    // Menampilkan skor akhir dan hasil permainan
    for (int player = 0; player < MAX_PLAYERS; player++) {
        int score = calculateScore(playerHands[player], handSizes[player]);
        printf("Skor akhir Pemain %d: %d\n", player + 1, score);
        
        if (score > 21) {
            printf("Pemain %d busts!\n", player + 1);
        }
        
        printf("\n");
    }
}
