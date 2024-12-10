#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function prototypes
int binary_to_decimal(const char *binary_str);
void decimal_to_binary(int decimal_num, char *binary_str);
void binary_to_hexadecimal(const char *binary_str, char *hex_str);
void hexadecimal_to_binary(const char *hex_str, char *binary_str);
void decimal_to_hexadecimal(int decimal_num, char *hex_str);
int hexadecimal_to_decimal(const char *hex_str);

int main() {
    int choice;
    char binary_str[65]; // To hold binary strings (up to 64 bits + null terminator)
    char hex_str[17];    // To hold hexadecimal strings (up to 16 digits + null terminator)
    int decimal_num;

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
                scanf("%s", binary_str);
                printf("Decimal: %d\n", binary_to_decimal(binary_str));
                break;
            case 2:
                printf("Enter a decimal number: ");
                scanf("%d", &decimal_num);
                char binary_output[65];
                decimal_to_binary(decimal_num, binary_output);
                printf("Binary: %s\n", binary_output);
                break;
            case 3:
                printf("Enter a binary number: ");
                scanf("%s", binary_str);
                char hex_output[17];
                binary_to_hexadecimal(binary_str, hex_output);
                printf("Hexadecimal: %s\n", hex_output);
                break;
            case 4:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hex_str);
                char binary_output_hex[65];
                hexadecimal_to_binary(hex_str, binary_output_hex);
                printf("Binary: %s\n", binary_output_hex);
                break;
            case 5:
                printf("Enter a decimal number: ");
                scanf("%d", &decimal_num);
                char hex_output_dec[17];
                decimal_to_hexadecimal(decimal_num, hex_output_dec);
                printf("Hexadecimal: %s\n", hex_output_dec);
                break;
            case 6:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hex_str);
                printf("Decimal: %d\n", hexadecimal_to_decimal(hex_str));
                break;
            case 7:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Function implementations
int binary_to_decimal(const char *binary_str) {
    return (int)strtol(binary_str, NULL, 2);
}

void decimal_to_binary(int decimal_num, char *binary_str) {
    int index = 0;
    if (decimal_num == 0) {
        strcpy(binary_str, "0");
        return;
    }
    while (decimal_num > 0) {
        binary_str[index++] = (decimal_num % 2) + '0';
        decimal_num /= 2;
    }
    binary_str[index] = '\0';
    // Reverse the string
    for (int i = 0; i < index / 2; i++) {
        char temp = binary_str[i];
        binary_str[i] = binary_str[index - i - 1];
        binary_str[index - i - 1] = temp;
    }
}

void binary_to_hexadecimal(const char *binary_str, char *hex_str) {
    int decimal_num = binary_to_decimal(binary_str);
    sprintf(hex_str, "%X", decimal_num);
}

void hexadecimal_to_binary(const char *hex_str, char *binary_str) {
    int decimal_num = hexadecimal_to_decimal(hex_str);
    decimal_to_binary(decimal_num, binary_str);
}

void decimal_to_hexadecimal(int decimal_num, char *hex_str) {
    sprintf(hex_str, "%X", decimal_num);
}

int hexadecimal_to_decimal(const char *hex_str) {
    return (int)strtol(hex_str, NULL, 16);
}
