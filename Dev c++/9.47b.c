// Dita Ayodya Al Mira - D121241008
// NOMOR 9.47 BAGIAN B

#include <stdio.h>

void displayMatrix(int rows, int cols, double matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%8.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int k = 3; 
    int m = 5; 
    int n = 5; 

    // Matrix A
    double A[3][5] = {
        {2, -1.0 / 3, 0, 2.0 / 3, 4},
        {1.0 / 2, 3.0 / 2, 4, -2, 1},
        {0, 3, -9.0 / 7, 6.0 / 7, 4.0 / 3}
    };

    // Matrix B
    double B[5][5] = {
        {6, 5, 0, -2, 1.0 / 3},
        {5, 7.0 / 2, 3.0 / 4, -3.0 / 2, 0},
        {0, -1, 1, 0, 1},
        {9.0 / 2, 3.0 / 7, -3, 3, 3},
        {4, -1.0 / 2, 0, 3.0 / 4, 4}
    };

    double C[3][5] = {0}; 


    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }

    printf("Matrix A:\n");
    displayMatrix(k, m, A);

    printf("\nMatrix B:\n");
    displayMatrix(m, n, B);

    printf("\nMatrix C (Result of A * B):\n");
    displayMatrix(k, n, C);

    return 0;
}

