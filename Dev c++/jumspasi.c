// Dita Ayodya Al Mira - D121241008
// program menghitung jumlah spasi 

#include <stdio.h>

int main() {
    char input[100]; 
    int spaceCount = 0; 

    
    printf("Masukkan kalimat: ");
    fgets(input, sizeof(input), stdin); 

    
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ') { // Memeriksa apakah karakter adalah spasi
            spaceCount++;
        }
    }

    // Menampilkan  perhitungan
    printf("Jumlah spasi dalam kalimat: %d\n", spaceCount);

    return 0;
}
