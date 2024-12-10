// DITA AYODYA AL MIRA - D121241008
// CHAPTER 10 NOMOR 10.74

#include <stdio.h>

int main() {
    int n, count;
    float avg, d, sum = 0;
    float list[100]; 
    float *ptr;      

    printf("\nBerapa angka yang akan dirata-ratakan? ");
    scanf("%d", &n);
    printf("\n");

    ptr = list;  

    for (count = 0; count < n; ++count) {
        printf("i = %d x = ", count + 1);
        scanf("%f", ptr + count);  
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

