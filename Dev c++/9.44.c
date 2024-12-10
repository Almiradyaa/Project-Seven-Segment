/* DITA AYODYA AL MIRA - D121241008 */
// NOMOR 9.44

#include <stdio.h>
#include <math.h>

#define NUM_ROWS 30
#define NUM_COLS 16

int main() {
    double interest_rates[NUM_COLS] = {4, 4.5, 5, 5.5, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 11, 12, 15};
    int years[NUM_ROWS];

    
    printf("  ");
    for (int j = 0; j < NUM_COLS; j++) {
        printf("%6.1f%% ", interest_rates[j]);
    }
    printf("\n");

    for (int i = 0; i < NUM_ROWS; i++) {
        years[i] = i + 1;
        printf("%2d ", years[i]);
        for (int j = 0; j < NUM_COLS; j++) {
            double fip = pow(1 + interest_rates[j] / 100, years[i]);
            printf("%7.4f ", fip);
        }
        printf("\n");
    }

    return 0;
}
