/* DITA AYODYA AL MIRA - D121241008 */
// NOMOR 9.42 

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 20      // Maksimum jumlah siswa
#define MAX_SCORES 6         // Jumlah nilai ujian per siswa
#define MAX_NAME_LENGTH 30    // Panjang maksimum nama siswa

void inputScores(char names[MAX_STUDENTS][MAX_NAME_LENGTH], float scores[MAX_STUDENTS][MAX_SCORES], int numStudents);
void calculateWeightedAverages(float scores[MAX_STUDENTS][MAX_SCORES], float averages[MAX_STUDENTS], int numStudents);
void displayResults(char names[MAX_STUDENTS][MAX_NAME_LENGTH], float scores[MAX_STUDENTS][MAX_SCORES], float averages[MAX_STUDENTS], int numStudents);

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH]; // Array untuk menyimpan nama siswa
    float scores[MAX_STUDENTS][MAX_SCORES];    // Array untuk menyimpan nilai ujian
    float averages[MAX_STUDENTS];               // Array untuk menyimpan rata-rata nilai
    int numStudents;                            // Jumlah siswa

    printf("Masukkan jumlah siswa (maks %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("Jumlah siswa melebihi batas maksimum.\n");
        return 1;
    }

    inputScores(names, scores, numStudents); // Memanggil fungsi untuk memasukkan data
    calculateWeightedAverages(scores, averages, numStudents); // Menghitung rata-rata dengan bobot
    displayResults(names, scores, averages, numStudents); // Menampilkan hasil

    return 0;
}

// Fungsi untuk memasukkan nama siswa dan nilai ujian mereka
void inputScores(char names[MAX_STUDENTS][MAX_NAME_LENGTH], float scores[MAX_STUDENTS][MAX_SCORES], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Masukkan nama siswa %d: ", i + 1);
        scanf("%s", names[i]); // Membaca nama siswa

        printf("Masukkan %d nilai ujian untuk %s:\n", MAX_SCORES, names[i]);
        for (int j = 0; j < MAX_SCORES; j++) {
            printf("Nilai %d: ", j + 1);
            scanf("%f", &scores[i][j]); // Membaca nilai ujian
        }
    }
}

// Fungsi untuk menghitung rata-rata nilai dengan bobot untuk setiap siswa
void calculateWeightedAverages(float scores[MAX_STUDENTS][MAX_SCORES], float averages[MAX_STUDENTS], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        averages[i] = (scores[i][0] * 0.15) + (scores[i][1] * 0.15) + 
                      (scores[i][2] * 0.15) + (scores[i][3] * 0.15) + 
                      (scores[i][4] * 0.20) + (scores[i][5] * 0.20); // Menghitung rata-rata dengan bobot
    }
}

// Fungsi untuk menampilkan hasil termasuk rata-rata kelas dan detail masing-masing siswa
void displayResults(char names[MAX_STUDENTS][MAX_NAME_LENGTH], float scores[MAX_STUDENTS][MAX_SCORES], float averages[MAX_STUDENTS], int numStudents) {
    float overallAverage = 0.0;

    // Menghitung rata-rata keseluruhan kelas
    for (int i = 0; i < numStudents; i++) {
        overallAverage += averages[i]; // Menjumlahkan rata-rata individu
    }
    
    overallAverage /= numStudents; // Menghitung rata-rata keseluruhan

    printf("\nRata-rata Kelas Keseluruhan: %.2f\n\n", overallAverage); // Menampilkan rata-rata kelas

    printf("Hasil Siswa:\n");
    printf("%-15s", "Nama"); // Header untuk kolom nama
    for (int j = 1; j <= MAX_SCORES; j++) { // Header untuk kolom nilai
        printf("Nilai %d   ", j);
    }
    printf("Rata-rata   Deviasi\n"); // Header untuk kolom deviasi

    for (int i = 0; i < numStudents; i++) {
        printf("%-15s", names[i]); // Menampilkan nama siswa
        
        for (int j = 0; j < MAX_SCORES; j++) { // Menampilkan setiap nilai ujian siswa
            printf("%.2f   ", scores[i][j]);
        }
        
        printf("%.2f   ", averages[i]); // Menampilkan rata-rata setiap siswa
        
        float deviation = averages[i] - overallAverage; // Menghitung deviasi terhadap rata-rata kelas
        printf("%.2f\n", deviation); // Menampilkan deviasi
    }
}
