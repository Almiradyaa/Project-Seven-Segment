/* DITA AYODYA AL MIRA - D121241008 */
// NOMOR 9.35

#include <stdio.h>

#define SIZE 100 // Mendefinisikan ukuran maksimum array

// Fungsi untuk mengurutkan berdasarkan magnitudo
void reorderByMagnitude(int n, float x[], int ascending) {
    int i, j;
    float temp;

    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j) {
            // Mengurutkan berdasarkan magnitudo
            if (ascending) { // Jika urut dari kecil ke besar
                if ((x[j] < 0 ? -x[j] : x[j]) < (x[i] < 0 ? -x[i] : x[i])) {
                    // Menukar dua elemen jika diperlukan
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            } else { // Jika urut dari besar ke kecil
                if ((x[j] < 0 ? -x[j] : x[j]) > (x[i] < 0 ? -x[i] : x[i])) {
                    // Menukar dua elemen jika diperlukan
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }
    }
}

// Fungsi untuk mengurutkan berdasarkan tanda aljabar
void reorderByAlgebraic(int n, float x[], int ascending) {
    int i, j;
    float temp;

    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j) {
            // Mengurutkan berdasarkan tanda aljabar
            if (ascending) { // Jika urut dari kecil ke besar
                if (x[j] < x[i]) {
                    // Menukar dua elemen jika diperlukan
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            } else { // Jika urut dari besar ke kecil
                if (x[j] > x[i]) {
                    // Menukar dua elemen jika diperlukan
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }
    }
}

int main() {
    int n = 10; // Jumlah elemen yang akan dimasukkan
    float x[SIZE] = {4.7, -8.0, -2.3, 11.4, 12.9, 5.1, 8.8, -0.2, 6.0, -14.7}; 
    int choice; // Variabel untuk menyimpan pilihan pengguna

    // Menampilkan menu pilihan
    printf("\nSelect rearrangement option:\n");
    printf("1. Smallest to largest, by magnitude\n");
    printf("2. Smallest to largest, algebraic (by sign)\n");
    printf("3. Largest to smallest, by magnitude\n");
    printf("4. Largest to smallest, algebraic\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice); // Membaca pilihan pengguna

    // Mengurutkan berdasarkan pilihan pengguna
    if (choice == 1) {
        reorderByMagnitude(n, x, 1); // Urutkan dari kecil ke besar berdasarkan magnitudo
    } else if (choice == 2) {
        reorderByAlgebraic(n, x, 1); // Urutkan dari kecil ke besar berdasarkan tanda
    } else if (choice == 3) {
        reorderByMagnitude(n, x, 0); // Urutkan dari besar ke kecil berdasarkan magnitudo
    } else if (choice == 4) {
        reorderByAlgebraic(n, x, 0); // Urutkan dari besar ke kecil berdasarkan tanda
    } else {
        printf("Invalid choice!\n");
        return 1; // Mengembalikan 1 untuk menunjukkan kesalahan
    }

    // Menampilkan daftar angka yang telah diurutkan
    printf("\nReordered List of Numbers:\n\n");
    for (int i = 0; i < n; ++i) {
        printf("i = %d x = %.2f\n", i + 1, x[i]); // Menampilkan angka yang telah diurutkan
    }

    return 0; // Mengembalikan 0 untuk menunjukkan bahwa program selesai dengan sukses
}
