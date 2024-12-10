//SOAL NOMOR 6.59 BAGIAN A
// Mengimpor library yang diperlukan
#include <stdio.h>      // Untuk fungsi input/output
#include <string.h>     // Untuk fungsi manipulasi string
#include <ctype.h>      // Untuk fungsi manipulasi karakter

// Mendefinisikan konstanta untuk panjang maksimum string
#define MAX_LENGTH 1000

int main() {
    // Deklarasi variabel
    char text[MAX_LENGTH];    // Array untuk menyimpan teks
    int i;                    // Variabel iterator
    
    // Meminta input teks huruf besar dari pengguna
    printf("Enter an Uppercase Text: ");
    // Membaca input menggunakan fgets
    fgets(text, MAX_LENGTH, stdin);
    
    // Menghapus karakter newline dari input
    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }
    
    // Mengkonversi setiap karakter ke huruf kecil
    for(i = 0; text[i] != '\0'; i++) {
        text[i] = tolower(text[i]);
    }
    
    // Menampilkan hasil konversi
    printf("Converted Text: %s\n", text);
    
    return 0;
}

