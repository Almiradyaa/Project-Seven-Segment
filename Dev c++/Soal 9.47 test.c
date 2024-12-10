// DITA AYODYA AL MIRA - D121241008
// CHAPTER 9 NOMOR 9.47 A

#include <stdio.h>

// Fungsi untuk menghitung hasil perkalian baris matriks dengan vektor
int hitungHasilBaris(int baris[], int x[], int n) {
    int hasil = 0;
    for(int i = 0; i < n; i++) {
        hasil += baris[i] * x[i];
    }
    return hasil;
}

int main() {
    // Deklarasi ukuran matriks
    int m = 6;  // jumlah baris
    int n = 8;  // jumlah kolom
    
    // Inisialisasi matriks A
    int A[6](citation_6)[8](citation_8) = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {2, 3, 4, 5, 6, 7, 8, 9},
        {3, 4, 5, 6, 7, 8, 9, 10},
        {4, 5, 6, 7, 8, 9, 10, 11},
        {5, 6, 7, 8, 9, 10, 11, 12},
        {6, 7, 8, 9, 10, 11, 12, 13}
    };
    
    // Inisialisasi vektor X (sesuai dengan data di soal)
    int X[8](citation_8) = {1, -8, 3, -6, 5, -4, 7, -2};
    
    // Array untuk menyimpan hasil Y
    int Y[6](citation_6);
    
    // Menampilkan matriks A
    printf("Matriks A:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
    
    // Menampilkan vektor X
    printf("\nVektor X:\n");
    for(int i = 0; i < n; i++) {
        printf("%3d\n", X[i]);
    }
    
    // Menghitung nilai Y
    for(int i = 0; i < m; i++) {
        Y[i] = 0;  // Inisialisasi Y[i] dengan 0
        for(int j = 0; j < n; j++) {
            Y[i] += A[i][j] * X[j];  // Perhitungan langsung tanpa fungsi terpisah
        }
    }
    
    // Menampilkan hasil Y
    printf("\nHasil vektor Y:\n");
    for(int i = 0; i < m; i++) {
        printf("Y[%d] = %d\n", i+1, Y[i]);
    }
    
    return 0;
}

