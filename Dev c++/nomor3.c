/*Dita Ayodya Al Mira-D121241008*/
/*nomor 3*/

#include <stdio.h> // Include standard input-output header

int main() {
    // Deklarasikan array bertipe int dengan 5 elemen dan inisialisasi nilainya
    int numbers[5] = {1, 3, 5, 7, 9}; // Array 'numbers' berisi 5 angka bulat

    // Variabel untuk menyimpan total akumulasi
    int total = 0; // Inisialisasi total dengan 0

    // Gunakan loop for untuk menghitung total dari seluruh elemen array
    for (int i = 0; i < 5; i++) { // Loop dari indeks 0 hingga 4
        total += numbers[i]; // Tambahkan elemen saat ini ke total
    }

    // Cetak hasil total
    printf("Total akumulasi dari array adalah: %d\n", total); // Tampilkan total

    return 0; // Mengembalikan 0 menandakan program selesai dengan sukses
}
