#include <stdio.h>

void main() {
    char hex[100];
    int decimal = 0;
    int i = 0, base = 1; 

    printf("Enter a hexadecimal number: \n");
    scanf("%s", hex);

    
    while (hex[i] != '\0') {
        i++;
    }

    
    for (int j = i - 1; j >= 0; j--) {
        if (hex[j] >= '0' && hex[j] <= '9') {
            decimal += (hex[j] - '0') * base; 
        } else if (hex[j] >= 'A' && hex[j] <= 'F') {
            decimal += (hex[j] - 'A' + 10) * base; 
        } else if (hex[j] >= 'a' && hex[j] <= 'f') {
            decimal += (hex[j] - 'a' + 10) * base; 
        }
        base *= 16; 
    }

    printf("Decimal: %d\n", decimal);
}
