#include <stdio.h>

int binary_to_decimal(const char *binary) {
    int decimal = 0;
    while (*binary) {
        decimal = (decimal << 1) + (*binary - '0');
        binary++;
    }
    return decimal;
}

void decimal_to_binary(int decimal, char *binary) {
    int index = 0;
    if (decimal == 0) {
        binary[index++] = '0';
    } else {
        while (decimal > 0) {
            binary[index++] = (decimal % 2) + '0';
            decimal /= 2;
        }
    }
    binary[index] = '\0';

    // Reverse the string
    for (int i = 0; i < index / 2; i++) {
        char temp = binary[i];
        binary[i] = binary[index - i - 1];
        binary[index - i - 1] = temp;
    }
}

void binary_to_hexadecimal(const char *binary, char *hexadecimal) {
    int decimal = binary_to_decimal(binary);
    int index = 0;

    if (decimal == 0) {
        hexadecimal[index++] = '0';
    } else {
        while (decimal > 0) {
            int remainder = decimal % 16;
            hexadecimal[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
            decimal /= 16;
        }
    }
    hexadecimal[index] = '\0';

    // Reverse the string
    for (int i = 0; i < index / 2; i++) {
        char temp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[index - i - 1];
        hexadecimal[index - i - 1] = temp;
    }
}

void hexadecimal_to_binary(const char *hexadecimal, char *binary) {
    int decimal = 0;
    
    while (*hexadecimal) {
        decimal *= 16;
        if (*hexadecimal >= '0' && *hexadecimal <= '9') {
            decimal += *hexadecimal - '0';
        } else if (*hexadecimal >= 'A' && *hexadecimal <= 'F') {
            decimal += *hexadecimal - 'A' + 10;
        }
        hexadecimal++;
    }

    decimal_to_binary(decimal, binary);
}

void decimal_to_hexadecimal(int decimal, char *hexadecimal) {
    int index = 0;

    if (decimal == 0) {
        hexadecimal[index++] = '0';
    } else {
        while (decimal > 0) {
            int remainder = decimal % 16;
            hexadecimal[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
            decimal /= 16;
        }
    }
    
    hexadecimal[index] = '\0';

    // Reverse the string
    for (int i = 0; i < index / 2; i++) {
        char temp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[index - i - 1];
        hexadecimal[index - i - 1] = temp;
    }
}

int hexadecimal_to_decimal(const char *hexadecimal) {
    int decimal = 0;

    while (*hexadecimal) {
        decimal *= 16;
        if (*hexadecimal >= '0' && *hexadecimal <= '9') {
            decimal += *hexadecimal - '0';
        } else if (*hexadecimal >= 'A' && *hexadecimal <= 'F') {
            decimal += *hexadecimal - 'A' + 10;
        }
        hexadecimal++;
    }

    return decimal;
}

int main() {
    char binary[65]; // Enough for a binary number up to 64 bits
    char hexadecimal[17]; // Enough for a hex number up to 16 digits
    int decimal, choice;

    while (1) {
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

        switch (choice) {
            case 1:
                printf("Enter a binary number: ");
                scanf("%s", binary);
                printf("Decimal: %d\n", binary_to_decimal(binary));
                break;
            case 2:
                printf("Enter a decimal number: ");
                scanf("%d", &decimal);
                decimal_to_binary(decimal, binary);
                printf("Binary: %s\n", binary);
                break;
            case 3:
                printf("Enter a binary number: ");
                scanf("%s", binary);
                binary_to_hexadecimal(binary, hexadecimal);
                printf("Hexadecimal: %s\n", hexadecimal);
                break;
            case 4:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexadecimal);
                hexadecimal_to_binary(hexadecimal, binary);
                printf("Binary: %s\n", binary);
                break;
            case 5:
                printf("Enter a decimal number: ");
                scanf("%d", &decimal);
                decimal_to_hexadecimal(decimal, hexadecimal);
                printf("Hexadecimal: %s\n", hexadecimal);
                break;
            case 6:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexadecimal);
                printf("Decimal: %d\n", hexadecimal_to_decimal(hexadecimal));
                break;
            case 7:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
