// DITA AYODYA AL MIRA
// D121241008
// NOMOR 9.37

#include <stdio.h>
#define MAXROWS 20
#define MAXCOLS 30

void readinput(int a[][MAXCOLS], int nrows, int ncols);
void computedifferences(int a[][MAXCOLS], int b[][MAXCOLS], 
                        int c[][MAXCOLS], int nrows, int ncols);
void writeoutput(int c[][MAXCOLS], int nrows, int ncols);

int main() {
    int nrows, ncols;

    // Definisi array
    int a[MAXROWS][MAXCOLS], b[MAXROWS][MAXCOLS], c[MAXROWS][MAXCOLS];

    printf("How many rows? ");
    scanf("%d", &nrows);
    printf("How many columns? ");
    scanf("%d", &ncols);

    printf("\n\nFirst table:\n");
    readinput(a, nrows, ncols);
    
    printf("\n\nSecond table:\n");
    readinput(b, nrows, ncols);

    // Menghitung selisih antara dua tabel
    computedifferences(a, b, c, nrows, ncols);
    
    printf("\n\nDifferences of the elements:\n\n");
    writeoutput(c, nrows, ncols);

    return 0;
}



/* Membaca tabel bilangan bulat */
void readinput(int a[][MAXCOLS], int m, int n) {
    int row, col;
    for (row = 0; row < m; ++row) {
        printf("\nEnter data for row no. %2d\n", row + 1);
        for (col = 0; col < n; ++col) {
            scanf("%d", &a[row][col]);
        }
    }
}

/* Menghitung selisih elemen dari dua tabel bilangan bulat */
void computedifferences(int a[][MAXCOLS], int b[][MAXCOLS], 
                        int c[][MAXCOLS], int m, int n) {
    int row, col;
    for (row = 0; row < m; ++row) {
        for (col = 0; col < n; ++col) {
            c[row][col] = a[row][col] - b[row][col]; // Menghitung selisih
        }
    }
}

/* Menampilkan tabel bilangan bulat */
void writeoutput(int a[][MAXCOLS], int m, int n) {
    int row, col;
    for (row = 0; row < m; ++row) {
        for (col = 0; col < n; ++col) {
            printf("%4d", a[row][col]);
        }
        printf("\n"); // Pindah ke baris berikutnya
    }
}
