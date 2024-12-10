//Soal nomor 6.45 bagian b
//do-while loop

#include <stdio.h>

int main() {
    int i = 2;          
    int total = 0;        
    
    do {
        total += i;       
        i += 3;         
    } while (i < 100);  
    
    printf("total: %d\n", total);
    return 0;
}

