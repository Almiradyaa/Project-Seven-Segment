#include <stdio.h>

int main() {
    printf("A. Bilangan genap 2 hingga 30:\n");
    for(int i = 2; i <= 30; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("B. Bilangan genap yang habis dibagi 3:\n");
    for(int i = 2; i <= 30; i += 2) {
        if(i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    printf("C. Penjumlahan bilangan genap dari 2 sampai 30 yang habis dibagi 3:\n");
    int total = 0;
    for(int i = 2; i <= 30; i += 2) {
        if(i % 3 == 0) {
            total += i;
        }
    }
    printf("Total: %d\n", total);

    return 0;
}

