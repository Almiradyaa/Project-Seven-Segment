//Dita Ayodya Al Mira_D121241008
//contoh penggunaan penyataan if untuk menentukan diskon

#include <stdio.h>

int main() {
    double total, Diskon;

    // Meminta input dari pengguna
    printf("Masukkan harga total: Rp ");
    scanf("%lf", &total);

    // Mengecek apakah harga awal lebih dari 10000 untuk menerapkan diskon
    if (total > 10000) 
        // Menghitung harga setelah diskon 50%
        Diskon = 0.5 * total;
        printf("Harga setelah diskon 50%% adalah: %.2lf\n", Diskon);


    return 0;
}
