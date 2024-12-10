/* DITA AYODYA AL MIRA - D121241008 */
// NOMOR 9.39

#include <stdio.h>

#define MAX_LENGTH 80 // Mendefinisikan panjang maksimum input

int main() {
    char text[MAX_LENGTH]; // Array untuk menyimpan teks
    int length = 0; // Variabel untuk menyimpan panjang teks

    printf("Masukkan sebuah baris teks (maksimal 80 karakter):\n");
    fgets(text, MAX_LENGTH, stdin); // Membaca input dari pengguna

    // Menghitung panjang teks
    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }

    printf("Teks terbalik: ");
    for (int i = length - 1; i >= 0; i--) { // Menampilkan teks terbalik
        putchar(text[i]);
    }
    printf("\n"); // Pindah ke baris baru

    return 0;
}
