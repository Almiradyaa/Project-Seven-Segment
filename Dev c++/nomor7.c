/*Dita Ayodya Al Mira-D121241008*/
/* nomor 7 */

#include <stdio.h> 
#include <string.h> // Include string.h untuk fungsi strcpy 

int main() {
    // Deklarasikan array karakter dengan alokasi 50 elemen
    char stuff[50]; // Array 'stuff' dapat menyimpan hingga 50 karakter

    // mengisi nilai string "Welcome" ke dalam array stuff menggunakan strcpy
    strcpy(stuff, "Welcome"); // Salin string "Welcome" ke dalam array stuff

    printf("Isi array stuff: %s\n", stuff); // Tampilkan isi array

    return 0; // Mengembalikan 0 menandakan program selesai dengan sukses
}
