//Dita Ayodya Al Mira_D121241008
//Soal 6.45 bagian a: while loop

#include <stdio.h>

int main() {
    int i = 2;          
    int total = 0;        
    
    while (i < 100) {   
        total += i;       
        i += 3;         
    }
    
    printf("total: %d\n", total);
    return 0;
}

