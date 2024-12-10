//NOMOR 6.69 BAGIAN A
// Mengimpor library standar input/output
#include <stdio.h>
// Mendefinisikan konstanta untuk ukuran maksimum array
#define MAX_NUMBERS 100

int main() {
    // Deklarasi variabel array dan variabel pendukung
    float x[MAX_NUMBERS];     // Array untuk menyimpan nilai-nilai data
    float f[MAX_NUMBERS];     // Array untuk menyimpan faktor bobot
    int n;                    // Variabel untuk menyimpan jumlah elemen
    float weighted_avg = 0;   // Variabel untuk menyimpan rata-rata tertimbang
    float sum_f = 0;         // Variabel untuk menyimpan jumlah faktor bobot

    // Meminta input jumlah elemen dari pengguna
    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    // Loop untuk meminta input faktor bobot
    printf("\nEnter weighting factors (f):\n");
    for(int i = 0; i < n; i++) {
        printf("f[%d]: ", i+1);
        scanf("%f", &f[i]);
        // Menambahkan setiap faktor bobot ke total
        sum_f += f[i];
    }

    // Validasi: memeriksa apakah jumlah faktor bobot sama dengan 1
    if(sum_f != 1.0) {
        printf("Error: Sum of weighting factors must equal 1\n");
        return 1;  // Mengembalikan kode error
    }

    // Loop untuk meminta input nilai data
    printf("\nEnter numbers (x):\n");
    for(int i = 0; i < n; i++) {
        printf("x[%d]: ", i+1);
        scanf("%f", &x[i]);
    }

    // Menghitung rata-rata tertimbang
    for(int i = 0; i < n; i++) {
        weighted_avg += f[i] * x[i];  // Mengalikan setiap nilai dengan bobotnya
    }

    // Menampilkan hasil rata-rata tertimbang
    printf("\nWeighted Average = %.2f\n", weighted_avg);

    return 0;  // Program selesai dengan sukses
}

