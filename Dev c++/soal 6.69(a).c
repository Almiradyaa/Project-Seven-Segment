#include <stdio.h>
#define MAX_NUMBERS 100

int main() {
    float x[MAX_NUMBERS];    
    float f[MAX_NUMBERS];    
    int n;                   
    float weighted_avg = 0;  
    float sum_f = 0;        

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    printf("\nEnter weighting factors (f):\n");
    for(int i = 0; i < n; i++) {
        printf("f[%d]: ", i+1);
        scanf("%f", &f[i]);
        sum_f += f[i];
    }

    if(sum_f != 1.0) {
        printf("Error: Sum of weighting factors must equal 1\n");
        return 1;
    }

    printf("\nEnter numbers (x):\n");
    for(int i = 0; i < n; i++) {
        printf("x[%d]: ", i+1);
        scanf("%f", &x[i]);
    }

    for(int i = 0; i < n; i++) {
        weighted_avg += f[i] * x[i];
    }

    printf("\nWeighted Average = %.2f\n", weighted_avg);

    return 0;
}

