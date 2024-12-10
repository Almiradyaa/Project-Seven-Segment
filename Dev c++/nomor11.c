/*Dita Ayodya Al Mira-D121241008*/
/*nomor 11*/

#include <stdio.h> 

int main() {
    // Deklarasikan array karakter untuk menyimpan 5 karakter
    char words[5]; // Array 'words' untuk 5 karakter 

    // Loop untuk membaca 5 karakter dari input
    printf("Masukkan 5 karakter:\n");
    for (int i = 0; i < 5; i++) { // Loop dari indeks 0 hingga 4
        scanf(" %c", &words[i]); // Baca satu karakter dan simpan di array words
    }


    // Tampilkan isi dari array words
    printf("Isi array words: %s\n", words); // Tampilkan isi array

    return 0; // Mengembalikan 0 menandakan program selesai dengan sukses
}
