// Dita Ayodya Al Mira- D121241008
// balikkan kalimat

#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; 
    char reversed[100]; 
    int length, j = 0;

    printf("Masukkan kalimat: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    length = strlen(input); 

    // Membalikkan urutan huruf
    for (int i = length - 1; i >= 0; i--) {
        reversed[j++] = input[i]; // Menyimpan karakter dari belakang ke depan
    }
    reversed[j] = '\0'; // Menambahkan karakter null di akhir string

    printf("Kalimat setelah dibalik: %s\n", reversed);

    return 0;
}
