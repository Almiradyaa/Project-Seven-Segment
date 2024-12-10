// D121241008 - DITA AYODYA AL MIRA
// CHAPTER 7 NOMOR 7.40

#include <stdio.h>
#include <math.h>

void hitungAkarKuadrat(float a, float b, float c, float *x1, float *x2) {
    float diskriminan = b*b - 4*a*c;
    
    *x1 = (-b + sqrt(diskriminan)) / (2*a);
    *x2 = (-b - sqrt(diskriminan)) / (2*a);
}

int main() {
    float a, b, c;    
    float x1, x2;     
    
    printf("Masukkan nilai koefisien a: ");
    scanf("%f", &a);
    printf("Masukkan nilai koefisien b: ");
    scanf("%f", &b);
    printf("Masukkan nilai koefisien c: ");
    scanf("%f", &c);
    
    hitungAkarKuadrat(a, b, c, &x1, &x2);
    
    printf("\n=== Hasil Perhitungan ===\n");
    printf("Koefisien persamaan kuadrat:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);
    printf("\nAkar-akar persamaan:\n");
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
    
    return 0;
}

