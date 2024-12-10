//Soal nomor 6.45 bagian c
//for loop

#include <stdio.h>

int main() {
    int total = 0;       
    
    for(int i = 2; i < 100; i += 3) {
        total += i;       
    }
    
    printf("total: %d\n", total);
    return 0;
}

