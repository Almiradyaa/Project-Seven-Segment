/* DITA AYODYA AL MIRA - D121241008 */
// NOMOR 9.34

#include <stdio.h>
#define SIZE 100 // Mendefinisikan ukuran maksimum array

// Deklarasi fungsi untuk mengurutkan array
void reorder(int n, int x[]);

int main() {
    int i, n, x[SIZE]; // Variabel untuk menyimpan jumlah elemen dan array

    // Membaca nilai untuk n
    printf("\nHow many numbers will be entered? ");
    scanf("%d", &n); // Membaca jumlah angka yang akan dimasukkan
    printf("\n");

    // Membaca daftar angka
    for (i = 0; i < n; ++i) {
        printf("i = %d x = ", i + 1);
        scanf("%d", &x[i]); // Membaca setiap angka ke dalam array
    }

    // Mengurutkan semua elemen array
    reorder(n, x);

    // Menampilkan daftar angka yang telah diurutkan
    printf("\n\nReordered List of Numbers (from largest to smallest):\n\n");
    for (i = 0; i < n; ++i) {
        printf("i = %d x = %d\n", i + 1, x[i]); // Menampilkan angka yang telah diurutkan
    }

    return 0; // Mengembalikan 0 untuk menunjukkan bahwa program selesai dengan sukses
}

// Fungsi untuk mengurutkan daftar angka
void reorder(int n, int x[]) {
    int i, item, temp;

    // Mengurutkan elemen dari terbesar ke terkecil
    for (item = 0; item < n - 1; ++item) {
        // Mencari elemen terbesar dari sisa elemen
        for (i = item + 1; i < n; ++i) {
            if (x[i] > x[item]) { // Menggunakan '>' untuk urutan menurun
                // Menukar dua elemen
                temp = x[item];
                x[item] = x[i];
                x[i] = temp;
            }
        }
    }
}
