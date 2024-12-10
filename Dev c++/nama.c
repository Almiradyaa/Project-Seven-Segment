// Dita Ayodya Al Mira-D121241008
//program memasukkan data string dari keyboard dengan fgets()

#include <stdio.h>
#include <ctype.h> //sebagai header fungsi isupper dan islower

int main() {
    char input[100];
	// inisialisasi untuk menghitung huruf kecil dan kapital 
    int lowerCount = 0, upperCount = 0; 

    
    printf("masukkan kalimat: ");
    fgets(input, sizeof(input), stdin); 

    // fungsi else if untuk menghitung jumlah huruf
    for (int i = 0; input[i] != '\0'; i++) {
        if (islower(input[i])) { 
            lowerCount++;
        } else if (isupper(input[i])) { 
            upperCount++;
        }
    }

    //menampilkan hasil perhitungan huruf
    printf("Lowercase letters: %d\n", lowerCount);
    printf("Uppercase letters: %d\n", upperCount);

    return 0;
}
