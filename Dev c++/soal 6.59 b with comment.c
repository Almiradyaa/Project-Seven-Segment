//NOMOR 6.59 BAGIAN B
// Mengimpor library yang diperlukan
#include <stdio.h>      // Untuk input/output standar
#include <string.h>     // Untuk fungsi manipulasi string (strlen)
#include <ctype.h>      // Untuk fungsi pemeriksaan karakter (isalpha, isdigit, dll)

// Mendefinisikan konstanta untuk panjang maksimum string
#define MAX_LENGTH 1000

int main() {
    // Deklarasi variabel
    char text[MAX_LENGTH];      // Array untuk menyimpan teks input
    char result[MAX_LENGTH];    // Array untuk menyimpan hasil transformasi
    int i;                      // Variabel untuk iterasi
    
    // Meminta input dari pengguna
    printf("Enter the text: ");
    // Membaca input dengan fgets (lebih aman dari gets)
    // Parameter: buffer tujuan, ukuran maksimal, sumber input (stdin = keyboard)
    fgets(text, MAX_LENGTH, stdin);
    
    // Menghapus karakter newline (\n) dari input jika ada
    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';  // Menggantinya dengan null terminator
    }
    
    // Loop untuk memproses setiap karakter dalam teks
    for(i = 0; text[i] != '\0'; i++) {
        // Memeriksa apakah karakter adalah huruf
        if (isalpha(text[i])) {
            // Jika huruf besar, ubah ke huruf kecil
            if (isupper(text[i])) {
                result[i] = tolower(text[i]);
            } 
            // Jika huruf kecil, ubah ke huruf besar
            else {
                result[i] = toupper(text[i]);
            }
        }
        
        // Memeriksa apakah karakter adalah angka
        else if (isdigit(text[i])) {
            result[i] = '0';    // Mengubah semua angka menjadi '0'
        }
        // Untuk karakter selain huruf dan angka
        else {
            result[i] = '*';    // Mengubah menjadi '*'
        }
    }
    // Menambahkan null terminator di akhir string hasil
    result[i] = '\0';
    
    // Menampilkan hasil transformasi
    printf("Transformed text: %s\n", result);
    
    return 0;
}

