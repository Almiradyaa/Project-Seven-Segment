/* Dita Ayodya Al Mira-D121241008 */
// NOMOR 9.32

#include <stdio.h>

// Deklarasi fungsi untuk membaca angka dan menghitung jumlah
void readNumbers(int n, float list[], float *sum);

// Deklarasi fungsi untuk menghitung deviasi dari rata-rata
void calculateDeviations(int n, float list[], float avg);

int main() {
    int n;                     // Variabel untuk menyimpan jumlah angka yang akan diinput
    float avg, sum = 0;      // Variabel untuk menyimpan rata-rata dan jumlah total
    float list[100];         // Array untuk menyimpan angka-angka yang diinput

    // Meminta pengguna memasukkan jumlah angka
    printf("\nHow many numbers will be averaged? ");
    scanf("%d", &n);        // Membaca nilai n dari input pengguna
    
    // Memanggil fungsi untuk membaca angka dan menghitung jumlahnya
    readNumbers(n, list, &sum);
    
    // Menghitung rata-rata
    avg = sum / n;          
    // Menampilkan rata-rata yang telah dihitung
    printf("\nThe average is %5.2f\n\n", avg);
    
    // Memanggil fungsi untuk menghitung dan menampilkan deviasi dari rata-rata
    calculateDeviations(n, list, avg);

    return 0;               // Mengembalikan 0 menandakan program selesai dengan sukses
}
// Fungsi untuk membaca angka dan menghitung jumlahnya
void readNumbers(int n, float list[], float *sum) {
    for (int count = 0; count < n; ++count) {  // Loop untuk membaca n angka
        printf("Enter number %d: ", count + 1); // Meminta pengguna memasukkan angka ke- count + 1
        scanf("%f", &list[count]);                // Membaca angka dan menyimpannya di array list
        *sum += list[count];                      // Mengupdate jumlah total dengan angka yang baru dibaca
    }
}

// Fungsi untuk menghitung dan menampilkan deviasi dari rata-rata
void calculateDeviations(int n, float list[], float avg) {
    for (int count = 0; count < n; ++count) {   // Loop untuk setiap angka dalam array
        float d = list[count] - avg;             // Menghitung deviasi dari rata-rata
        // Menampilkan indeks, nilai asli, dan deviasi
        printf("i = %d x = %5.2f d = %5.2f\n", count + 1, list[count], d);
    }
}
