#include <stdio.h>

void main() {
    int Decimal[100], number, i = 0, j;
    printf("Enter a decimal number: \n");
    scanf("%d", &number);
    
    while (number > 0) {
        Decimal[i] = number % 16; 
        number = number / 16;      
        i++;
    }
    
    printf("Hexadecimal: ");
    for (j = i - 1; j >= 0; j--) {
        if (Decimal[j] < 10) {
            printf("%d", Decimal[j]); 
        } else {
            printf("%c", Decimal[j] - 10 + 'A'); 
        }
    }
    printf("\n");
}
