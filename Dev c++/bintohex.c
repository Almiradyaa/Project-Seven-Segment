#include <stdio.h>

void main() {
    int Binary[100], number, i = 0, j;
    printf("Enter a binary number: \n");
    scanf("%d", &number);
    
    while (number > 0) {
        Binary[i] = number % 10; 
        number = number / 10;    
        i++;
    }

    int decimal = 0;
    int base = 1;

    
    for (j = 0; j < i; j++) {
        if (Binary[j] == 1) {
            decimal += base; 
        }
        base *= 2; 
    }

    
    char hex[100];
    int index = 0;

    while (decimal > 0) {
        int remainder = decimal % 16; 
        if (remainder < 10) {
            hex[index] = remainder + '0'; 
        } else {
            hex[index] = remainder - 10 + 'A'; 
        }
        decimal = decimal / 16; 
        index++;
    }

    printf("Hexadecimal: ");
    for (j = index - 1; j >= 0; j--) {
        printf("%c", hex[j]); 
    }
    printf("\n");
}
