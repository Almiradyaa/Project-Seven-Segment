#include <stdio.h>

int binary_to_decimal(const char *binary) {
    int decimal = 0;
    int base = 1; // Basis untuk bilangan biner (2^0)

    // Hitung panjang string biner
    int length = 0;
    while (binary[length] != '\0') {
        length++;
    }

    // Proses setiap digit dari kanan ke kiri
    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base; // Tambahkan basis jika digit adalah 1
        }
        base *= 2; // Gandakan basis untuk digit berikutnya
    }

    return decimal;
}

int main() {
    const char *binary = "1101"; // Contoh bilangan biner
    int decimal = binary_to_decimal(binary);
    printf("Decimal: %d\n", decimal);
    return 0;
}
