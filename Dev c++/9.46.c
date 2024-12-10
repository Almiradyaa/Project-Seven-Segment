/* DITA AYODYA AL MIRA - D121241008 */
// NOMOR 9.46

#include <stdio.h>
#include <string.h>

#define MAX_COUNTRIES 14        // Jumlah maksimum negara
#define MAX_NAME_LENGTH 30      // Panjang maksimum nama negara/ibu kota

// Struktur untuk menyimpan negara dan ibu kotanya
typedef struct {
    char country[MAX_NAME_LENGTH];
    char capital[MAX_NAME_LENGTH];
} CountryCapital;

int main() {
    // Daftar negara dan ibu kota
    CountryCapital countries[MAX_COUNTRIES] = {
        {"Canada", "Ottawa"},
        {"England", "London"},
        {"France", "Paris"},
        {"Germany", "Bonn"},
        {"India", "New Delhi"},
        {"Indonesia", "IKN"},
        {"Italy", "Rome"},
        {"Japan", "Tokyo"},
        {"Mexico", "Mexico City"},
        {"People's Republic of China", "Beijing"},
        {"Russia", "Moscow"},
        {"United States", "Washington"}
    };

    char input[MAX_NAME_LENGTH]; // Variabel untuk menyimpan input pengguna

    printf("Masukkan nama negara atau ibu kota (ketik 'End' untuk keluar):\n");

    while (1) {
        printf("Input: ");
        scanf(" %[^\n]", input); // Membaca input hingga newline

        if (strcmp(input, "End") == 0) { // Memeriksa jika input adalah 'End'
            break;
        }

        int found = 0; // Flag untuk menandakan apakah ditemukan
        // Mencari ibu kota berdasarkan nama negara
        for (int i = 0; i < MAX_COUNTRIES; i++) {
            if (strcmp(input, countries[i].country) == 0) {
                printf("Ibu kota dari %s adalah %s.\n", countries[i].country, countries[i].capital);
                found = 1;
                break;
            }
            // Mencari negara berdasarkan nama ibu kota
            else if (strcmp(input, countries[i].capital) == 0) {
                printf("Negara dengan ibu kota %s adalah %s.\n", countries[i].capital, countries[i].country);
                found = 1;
                break;
            }
        }

        if (!found) { // Jika tidak ditemukan
            printf("Negara atau ibu kota tidak ditemukan.\n");
        }
    }

    printf("Program selesai.\n");
    return 0;
}
