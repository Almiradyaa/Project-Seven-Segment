// Dita Ayodya Al Mira - D121241008
// NOMOR 9.47 BAGIAN A

#include <stdio.h>

void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void displayVector(int size, int vector[]) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", vector[i]);
    }
}


int main() {
    int m = 6;
    int n = 8; 

    int A[6][8] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {2, 3, 4, 5, 6, 7, 8, 9},
        {3, 4, 5, 6, 7, 8, 9, 10},
        {4, 5, 6, 7, 8, 9, 10, 11},
        {5, 6, 7, 8, 9, 10, 11, 12},
        {6, 7, 8, 9, 10, 11, 12, 13}
    };

    
    int X[8] = {1, -8, 3, -6, 5, -4, 7, -2};

    int Y[6] = {0}; 

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            Y[i] += A[i][j] * X[j];
        }
    }

    printf("Matrix A:\n");
    displayMatrix(m, n, A);

    printf("\nVector X:\n");
    displayVector(n, X);

    printf("\nVector Y:\n");
    displayVector(m, Y);

    return 0;
}

