//SOAL 6.69 BAGIAN O
#include <stdio.h>
int main() {
    // Deklarasi variabel
    int rows = 11;           // Jumlah baris dalam pola
    int start_num;           // Angka awal untuk setiap baris
    int num_count;           // Jumlah angka yang akan dicetak per sisi

    // Loop utama untuk setiap baris
    for(int i = 1; i <= rows; i++) {
        start_num = i;       // Set angka awal sesuai nomor baris
        num_count = i;       // Jumlah angka yang akan dicetak sama dengan nomor baris

        // Mencetak spasi di awal baris
        for(int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Mencetak angka yang meningkat (bagian kiri)
        for(int j = 1; j <= num_count; j++) {
            printf("%d", start_num);
            start_num++;
            if(start_num > 9) start_num = 0;  // Reset ke 0 jika melebihi 9
        }

        // Persiapan untuk mencetak bagian kanan
        start_num = i - 1;
        if(start_num < 0) start_num = 9;  // Jika negatif, set ke 9

        // Mencetak angka yang menurun (bagian kanan)
        for(int j = 1; j < num_count; j++) {
            printf("%d", start_num);
            start_num--;
            if(start_num < 0) start_num = 9;  // Reset ke 9 jika kurang dari 0
        }

        printf("\n");  // Pindah ke baris baru
    }
    return 0;
}

