// Dita Ayodya Al Mira - D121241008
// Program Konversi Bilangan


#include <stdio.h>
#include <math.h>
#include <string.h>

void binaryToDecimal() {
    long number;
    int rem, sum = 0, i = 0;
    printf("Enter a binary number: ");
    scanf("%ld", &number);
    
    while (number > 0) {
        rem = number % 10;
        sum += rem * pow(2, i);
        number /= 10;
        i++;
    }
    printf("Decimal: %d\n", sum);
}

void decimalToBinary() {
    int Binary[100], number, i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    while (number > 0) {
        Binary[i] = number % 2;
        number /= 2;
        i++;
    }
    
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", Binary[j]);
    }
    printf("\n");
}

void binaryToHexadecimal() {
    int Binary[100], number, i = 0, j;
    printf("Enter a binary number: ");
    scanf("%d", &number);
    
    while (number > 0) {
        Binary[i] = number % 10; 
        number /= 10;    
        i++;
    }

    int decimal = 0, base = 1;

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
        decimal /= 16; 
        index++;
    }

    printf("Hexadecimal: ");
    for (j = index - 1; j >= 0; j--) {
        printf("%c", hex[j]); 
    }
    printf("\n");
}

void decimalToHexadecimal() {
    int Decimal[100], number, i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    while (number > 0) {
        Decimal[i] = number % 16; 
        number /= 16;      
        i++;
    }
    
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        if (Decimal[j] < 10) {
            printf("%d", Decimal[j]); 
        } else {
            printf("%c", Decimal[j] - 10 + 'A'); 
        }
    }
    printf("\n");
}

void hexadecimalToBinary() {
    char hex[100]; 
    int decimal = 0, i = 0;

    printf("Enter a hexadecimal number: ");
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
            decimal /= 2;         
        }
    }

    printf("Binary: ");
    for (int j = index - 1; j >= 0; j--) {
        printf("%d", Binary[j]); 
    }
    printf("\n");
}

void hexadecimalToDecimal() {
    char hex[100];
    int decimal = 0, base = 1;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    
    for (int i = strlen(hex) - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base; 
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base; 
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base; 
        }
        base *= 16; 
    }

   printf("Decimal: %d\n", decimal);
}

int main() {
   int choice;

   do {
       printf("\nChoose a conversion option:\n");
       printf("1. Binary to Decimal\n");
       printf("2. Decimal to Binary\n");
       printf("3. Binary to Hexadecimal\n");
       printf("4. Hexadecimal to Binary\n");
       printf("5. Decimal to Hexadecimal\n");
       printf("6. Hexadecimal to Decimal\n");
       printf("7. Exit\n");
       printf("Enter your choice (1-7): ");
       scanf("%d", &choice);

       switch(choice) {
           case 1:
               binaryToDecimal();
               break;
           case 2:
               decimalToBinary();
               break;
           case 3:
               binaryToHexadecimal();
               break;
           case 4:
               hexadecimalToBinary();
               break;
           case 5:
               decimalToHexadecimal();
               break;
           case 6:
               hexadecimalToDecimal();
               break;
           case 7:
               printf("Exiting...\n");
               break;
           default:
               printf("Invalid choice! Please try again.\n");
       }
   } while(choice != 7);

   return 0;
}
