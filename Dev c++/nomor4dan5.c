/*Dita Ayodya Al Mira-D121241008*/
/*nomor 4 dan 5*/

#include <stdio.h> 

int main() {
    // Deklarasikan array multidimensi bertipe float dengan 3 baris dan 5 kolom
    float balances[3][5] = { // Inisialisasi array dengan beberapa nilai float
        {1, 2, 3, 4, 5}, // Baris pertama
        {2, 3, 4, 5, 6}, // Baris kedua
        {3, 4, 5, 6, 7}  // Baris ketiga
    };

    // Variabel untuk menyimpan total akumulasi
    float total = 0; // Inisialisasi total dengan 0

    // Loop untuk menghitung total dari seluruh elemen array
    for (int i = 0; i < 3; i++) { // Loop untuk setiap baris
        for (int j = 0; j < 5; j++) { // Loop untuk setiap kolom
            total += balances[i][j]; // Tambahkan elemen saat ini ke total
        }
    }

    // Cetak hasil total
    printf("Total akumulasi dari array balances adalah: %.f\n", total); // Tampilkan total dengan dua angka desimal

    return 0; // Mengembalikan 0 menandakan program selesai dengan sukses
}
