/* DITA AYODYA AL MIRA - D121241008 */
// NOMOR 9.38 

#include <stdio.h>

#define MAXROWS 30
#define MAXCOLS 30

void readinput(int a[][MAXCOLS], int *m, int *n);
void computesums(int a[3][MAXROWS][MAXCOLS], int m, int n);
void writeoutput(int a[][MAXCOLS], int m, int n);

int main() {
    int rows, cols;
    int tables[3][MAXROWS][MAXCOLS]; 

    readinput(tables[0], &rows, &cols);
    readinput(tables[1], &rows, &cols);
    computesums(tables, rows, cols);
    writeoutput(tables[2], rows, cols);

    return 0;
}

void readinput(int a[][MAXCOLS], int *m, int *n) {
    printf("Enter number of rows and columns: ");
    scanf("%d %d", m, n); 

    if (*m > MAXROWS || *n > MAXCOLS) {
        printf("Error: Dimensions exceed maximum allowed size.\n");
        return;
    }

    printf("Enter the elements:\n");
    
    for (int i = 0; i < *m; i++) {
        for (int j = 0; j < *n; j++) {
            scanf("%d", &a[i][j]); 
        }
    }
}

void computesums(int a[3][MAXROWS][MAXCOLS], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            a[2][i][j] = a[0][i][j] + a[1][i][j]; 
        }
    }
}

void writeoutput(int a[][MAXCOLS], int m, int n) {
    printf("Sum Table:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]); 
        }
        printf("\n");
    }
}
