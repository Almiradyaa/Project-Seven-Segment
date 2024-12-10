// Dita Ayodya Al Mira - D121241008

#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; 
    int spaceCount = 0; 

    printf("Masukkan kalimat: ");
    fgets(input, sizeof(input), stdin); 

    // untuk menghapus "\n"
    input[strcspn(input, "\n")] = 0;

    // Menghitung jumlah spasi dan menampilkan satu kata per baris
    char *word = strtok(input, " "); // strtok berfungsi memisahkan kata 

    while (word != NULL) {
        printf("%s\n", word); // Menampilkan kata
        word = strtok(NULL, " "); // Mendapatkan kata berikutnya
        spaceCount++; // Menghitung spasi (jumlah kata - 1)
    }

    // Menampilkan jumlah spasi
    // Jumlah spasi = jumlah kata - 1
    printf("Jumlah spasi dalam kalimat: %d\n", spaceCount - 1); 

    return 0;
}
