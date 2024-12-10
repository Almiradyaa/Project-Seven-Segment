// DITA AYODYA AL MIRA - D121241008
// CHAPTER 8 NOMOR 8.32 J

#include <stdio.h>

long int fibonacci(int n) {

    if (n <= 2) {
        return 1;
    }
    

    long int f1 = 1, f2 = 1, current;
    
    for (int i = 3; i <= n; i++) {
        current = f1 + f2;
        f1 = f2;
        f2 = current;
    }
    
    return current;
}

int main() {
    int n;
    
    printf("Masukkan nilai n untuk mencari bilangan Fibonacci ke-n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Mohon masukkan bilangan positif!\n");
        return 1;
    }
    
    printf("Bilangan Fibonacci ke-%d adalah: %ld\n", n, fibonacci(n));
    
    return 0;
}


