#include <stdio.h>

void main() {
    char hex[100]; 
    int decimal = 0; 
    int i = 0, j;

    printf("Enter a hexadecimal number: \n");
    scanf("%s", hex); 

    
    while (hex[i] != '\0') {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal = decimal * 16 + (hex[i] - '0'); 
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal = decimal * 16 + (hex[i] - 'A' + 10); 
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal = decimal * 16 + (hex[i] - 'a' + 10); 
        }
        i++;
    }

    int Binary[100], index = 0;

    if (decimal == 0) {
        Binary[index++] = 0; 
    } else {
        while (decimal > 0) {
            Binary[index++] = decimal % 2; 
            decimal = decimal / 2;         
        }
    }

    printf("Binary: ");
    for (j = index - 1; j >= 0; j--) {
        printf("%d", Binary[j]); 
    }
    printf("\n");
}
