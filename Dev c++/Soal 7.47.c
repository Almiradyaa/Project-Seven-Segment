// DITA AYODYA AL MIRA - D121241008
// CHAPTER 7 NOMOR 7.47

#include <stdio.h>

float bacaDanHitungJumlah(int n) {
    float x, sum = 0; 
    for (int count = 1; count <= n; ++count) {
        printf("Masukkan angka %d: ", count);
        scanf("%f", &x); 
        sum += x; 
    }
    return sum; 
}

int main() {
    int n = 10; 
    float total, rata; 
    
    total = bacaDanHitungJumlah(n);

    rata = total / n;

    printf("\n=== Hasil Perhitungan ===\n");
    printf("Jumlah total: %.2f\n", total);
    printf("Rata-rata: %.2f\n", rata);

    return 0;
}


