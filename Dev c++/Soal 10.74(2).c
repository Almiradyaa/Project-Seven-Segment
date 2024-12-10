// DITA AYODYA AL MIRA - D121241008
// CHAPTER 10 NOMOR 10.74

#include <stdio.h>

int main() {
    int n = 5;  
    float list[] = {3, -2, 12, 4.4, 3.5};  
    int count;
    float avg, d, sum = 0;
    float *ptr = list;  

    for (count = 0; count < n; ++count) {
        sum += *(ptr + count);  
    }
    
    avg = sum / n;  
    printf("\nRata-rata adalah %5.2f\n\n", avg);

    for (count = 0; count < n; ++count) {
        d = *(ptr + count) - avg;  
        printf("i = %d x = %5.2f  d = %5.2f\n", 
               count + 1, *(ptr + count), d);
    }

    return 0;
}

