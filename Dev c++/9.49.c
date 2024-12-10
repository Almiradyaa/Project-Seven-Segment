// Dita Ayodya Al Mira - D121241008
//NOMOR 9.49

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N1 32  // Nilai ASCII terendah yang dapat diterima (spasi)
#define N2 126 // Nilai ASCII tertinggi yang dapat diterima (~)

void encode(char *input, char *output, int randomNumber);
void decode(char *input, char *output, int randomNumber);
int generateRandomNumber();

int main() {
    char input[256];      // Buffer untuk menyimpan input teks
    char encoded[256];    // Buffer untuk menyimpan teks yang terkode
    char decoded[256];    // Buffer untuk menyimpan teks yang terdekode
    int randomNumber;

    srand(time(NULL)); // Mengatur seed untuk generator angka acak

    printf("Masukkan teks untuk di-encode: ");
    fgets(input, sizeof(input), stdin); // Membaca input dari pengguna

    randomNumber = generateRandomNumber(); // Menghasilkan angka acak untuk encoding
    encode(input, encoded, randomNumber); // Mengencode teks
    printf("Teks setelah encoding: %s\n", encoded);

    decode(encoded, decoded, randomNumber); // Mendecode teks
    printf("Teks setelah decoding: %s\n", decoded);

    return 0;
}

// Fungsi untuk menghasilkan angka acak positif
int generateRandomNumber() {
    return rand() % (N2 - N1 + 1) + 1; // Angka acak antara 1 dan (N2 - N1)
}

// Fungsi untuk mengencode teks
void encode(char *input, char *output, int randomNumber) {
    int i = 0;
    while (input[i] != '\0') {
        int asciiValue = (int)input[i]; // Mendapatkan nilai ASCII
        int encodedValue = asciiValue + randomNumber; // Menambahkan angka acak

        // Jika nilai melebihi N2, lakukan penyesuaian
        if (encodedValue > N2) {
            encodedValue = ((encodedValue - N2 - 1) % (N2 - N1 + 1)) + N1;
        }

        output[i] = (char)encodedValue; // Menyimpan karakter terkode
        i++;
    }
    output[i] = '\0'; // Menandai akhir string
}

// Fungsi untuk mendecode teks
void decode(char *input, char *output, int randomNumber) {
    int i = 0;
    while (input[i] != '\0') {
        int asciiValue = (int)input[i]; // Mendapatkan nilai ASCII terkode
        int decodedValue = asciiValue - randomNumber; // Mengurangi angka acak

        // Jika nilai kurang dari N1, lakukan penyesuaian
        if (decodedValue < N1) {
            decodedValue = ((decodedValue + (N2 - N1 + 1)) % (N2 - N1 + 1)) + N1;
        }

        output[i] = (char)decodedValue; // Menyimpan karakter terdekode
        i++;
    }
    output[i] = '\0'; // Menandai akhir string
}

