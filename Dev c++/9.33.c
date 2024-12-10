/*DITA AYODYA AL MIRA-D121241008*/
// NOMOR 9.33

#include <stdio.h>

// Deklarasi fungsi untuk menghitung dan menampilkan rata-rata
void calculateAverage(int n, float list[], float *avg);

// Deklarasi fungsi untuk menghitung dan menampilkan deviasi dari rata-rata
void calculateDeviations(int n, float list[], float avg);

int main() {
    int n = 5;  // Jumlah elemen
    float list[] = {3, -2, 12, 4.4, 3.5}; // Array angka
    float avg; // Variabel untuk menyimpan rata-rata

    // Menghitung dan menampilkan rata-rata
    calculateAverage(n, list, &avg);

    // Menghitung dan menampilkan deviasi dari rata-rata
    calculateDeviations(n, list, avg);

    return 0; 
}

// Fungsi untuk menghitung dan menampilkan rata-rata
void calculateAverage(int n, float list[], float *avg) {
    float sum = 0; // Variabel untuk menyimpan jumlah

    // Menghitung jumlah dari angka-angka
    for (int count = 0; count < n; ++count) {
        sum += list[count]; // Menambahkan setiap angka ke jumlah
    }
    
    // Menghitung rata-rata
    *avg = sum / n; 
    // Menampilkan rata-rata
    printf("\nRata-rata adalah %5.2f\n\n", *avg);
}

// Fungsi untuk menghitung dan menampilkan deviasi dari rata-rata
void calculateDeviations(int n, float list[], float avg) {
    for (int count = 0; count < n; ++count) { // Loop melalui setiap angka
        float d = list[count] - avg; // Menghitung deviasi dari rata-rata
        // Menampilkan indeks, angka asli, dan deviasi
        printf("i = %d x = %5.2f d = %5.2f\n", count + 1, list[count], d);
    }
}
