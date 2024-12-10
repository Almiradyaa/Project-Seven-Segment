// DITA AYODYA AL MIRA- D121241008
// NOMOR 9.48 BAGIAN B

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SQUARES 38 // Jumlah total kotak di roda roulette
#define RED_COUNT 18    // Jumlah kotak merah
#define BLACK_COUNT 18  // Jumlah kotak hitam

// Prototipe fungsi
void initializeWheel(int wheel[]);
void spinWheel(int *result);
void displayMenu();
int placeBet(int *betAmount);
void checkBet(int result, int betType, int betValue, int betAmount);

int main() {
    srand(time(NULL)); // Mengatur seed untuk generator angka acak
    int wheel[NUM_SQUARES];
    initializeWheel(wheel); // Inisialisasi roda roulette

    char playAgain = 'Y';
    
    while (toupper(playAgain) == 'Y') {
        int result;
        spinWheel(&result); // Memutar roda dan mendapatkan hasil
        
        printf("Marble mendarat di: %d\n", result);
        
        // Menampilkan opsi taruhan
        displayMenu();
        
        int betType;
        printf("Pilih jenis taruhan Anda (1-4): ");
        scanf("%d", &betType);
        
        int betAmount = placeBet(&betAmount); // Menempatkan taruhan
        
        int betValue = -1; // Inisialisasi nilai taruhan
        if (betType == 1 || betType == 2) {
            printf("Masukkan nomor kotak yang Anda pilih (1-36 untuk taruhan merah/hitam): ");
            scanf("%d", &betValue);
        } else if (betType == 3) {
            printf("Pilih taruhan Anda: (1 untuk Ganjil, 2 untuk Genap): ");
            scanf("%d", &betValue);
        } else if (betType == 4) {
            printf("Pilih taruhan Anda: (1 untuk Low 18, 2 untuk High 18): ");
            scanf("%d", &betValue);
        }

        checkBet(result, betType, betValue, betAmount); // Memeriksa hasil taruhan
        
        printf("Apakah Anda ingin bermain lagi? (Y/N): ");
        scanf(" %c", &playAgain); // Menanyakan apakah pemain ingin bermain lagi
    }

    printf("Terima kasih telah bermain! Selamat tinggal!\n");
    return 0;
}

// Fungsi untuk menginisialisasi roda roulette
void initializeWheel(int wheel[]) {
    for (int i = 0; i < NUM_SQUARES; i++) {
        if (i == 0) {
            wheel[i] = 0;   // Kotak hijau
        } else if (i == 37) {
            wheel[i] = 00;  // Kotak hijau
        } else {
            wheel[i] = i;   // Kotak merah dan hitam bernomor dari 1 hingga 36
        }
    }
}

// Fungsi untuk memutar roda roulette
void spinWheel(int *result) {
    *result = rand() % NUM_SQUARES; // Mendapatkan hasil acak dari roda
}

// Fungsi untuk menampilkan menu taruhan
void displayMenu() {
    printf("\nPilih opsi taruhan Anda:\n");
    printf("1. Taruhan pada satu kotak merah atau hitam (35-untuk-1)\n");
    printf("2. Taruhan pada warna (merah atau hitam) (1-untuk-1)\n");
    printf("3. Taruhan pada angka ganjil atau genap (1-untuk-1)\n");
    printf("4. Taruhan pada angka rendah (1-18) atau tinggi (19-36) (1-untuk-1)\n");
}

// Fungsi untuk menempatkan taruhan dan mengembalikan jumlahnya
int placeBet(int *betAmount) {
    do {
        printf("Masukkan jumlah taruhan Anda: ");
        scanf("%d", betAmount);
        
        if (*betAmount <= 0) {
            printf("Jumlah tidak valid! Silakan masukkan jumlah positif.\n");
        }
    } while (*betAmount <= 0);
    
    return *betAmount;
}

// Fungsi untuk memeriksa hasil taruhan pemain
void checkBet(int result, int betType, int betValue, int betAmount) {
    if (result == 0 || result == 00) { // Kotak hijau
        printf("Anda kalah! Marble mendarat di hijau.\n");
        return;
    }

    switch (betType) {
        case 1: // Taruhan pada satu kotak
            if (result == betValue) {
                printf("Selamat! Anda MENANG $%d\n", betAmount * 35);
            } else {
                printf("Anda kalah! Marble mendarat di %d.\n", result);
            }
            break;
        
        case 2: // Taruhan warna
            if ((result % 2 == 0 && result <= 36 && betValue == 'B') || 
                (result % 2 != 0 && result <= 36 && betValue == 'R')) {
                printf("Selamat! Anda MENANG $%d\n", betAmount);
            } else {
                printf("Anda kalah! Marble mendarat di %d.\n", result);
            }
            break;

        case 3: // Taruhan ganjil atau genap
            if ((result % 2 == 0 && betValue == 2) || 
                (result % 2 != 0 && betValue == 1)) {
                printf("Selamat! Anda MENANG $%d\n", betAmount);
            } else {
                printf("Anda kalah! Marble mendarat di %d.\n", result);
            }
            break;

        case 4: // Taruhan rendah atau tinggi
            if ((result >= 1 && result <= 18 && betValue == 1) || 
                (result >= 19 && result <= 36 && betValue == 2)) {
                printf("Selamat! Anda MENANG $%d\n", betAmount);
            } else {
                printf("Anda kalah! Marble mendarat di %d.\n", result);
            }
            break;

        default:
            printf("Opsi taruhan tidak valid!\n");
            break;
    }
}
