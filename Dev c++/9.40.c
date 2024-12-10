/* DITA AYODYA AL MIRA - D121241008 */
// NOMOR 9.40

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 20      
#define MAX_SCORES 6         
#define MAX_NAME_LENGTH 30    

void inputScores(char names[MAX_STUDENTS][MAX_NAME_LENGTH], float scores[MAX_STUDENTS][MAX_SCORES], int numStudents);
void calculateAverages(float scores[MAX_STUDENTS][MAX_SCORES], float averages[MAX_STUDENTS], int numStudents);
void displayResults(char names[MAX_STUDENTS][MAX_NAME_LENGTH], float scores[MAX_STUDENTS][MAX_SCORES], float averages[MAX_STUDENTS], int numStudents);

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH]; 
    float scores[MAX_STUDENTS][MAX_SCORES];    
    float averages[MAX_STUDENTS];               
    int numStudents;                            

    printf("Masukkan jumlah siswa (maks %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("Jumlah siswa melebihi batas maksimum.\n");
        return 1;
    }

    inputScores(names, scores, numStudents); 
    calculateAverages(scores, averages, numStudents);
    displayResults(names, scores, averages, numStudents); 

    return 0;
}

void inputScores
(char names[MAX_STUDENTS][MAX_NAME_LENGTH], 
	float scores[MAX_STUDENTS][MAX_SCORES], 
	int numStudents) 
	
	{for (int i = 0; i < numStudents; i++) {
        printf("Masukkan nama siswa %d: ", i + 1);
        scanf("%s", names[i]); 

        printf("Masukkan %d nilai ujian untuk %s:\n", MAX_SCORES, names[i]);
        for (int j = 0; j < MAX_SCORES; j++) {
            printf("Nilai %d: ", j + 1);
            scanf("%f", &scores[i][j]); 
        }
    }
}

void calculateAverages
(float scores[MAX_STUDENTS][MAX_SCORES], 
	float averages[MAX_STUDENTS], 
	int numStudents) 
	
	{for (int i = 0; i < numStudents; i++) {
        float sum = 0.0;
        for (int j = 0; j < MAX_SCORES; j++) {
            sum += scores[i][j]; 
        }
        averages[i] = sum / MAX_SCORES;
    }
}

void displayResults
(char names[MAX_STUDENTS][MAX_NAME_LENGTH],
	float scores[MAX_STUDENTS][MAX_SCORES],
	float averages[MAX_STUDENTS],
	int numStudents) 

{float overallAverage = 0.0;

    printf("\nRata-rata Kelas Keseluruhan: ");
    
    for (int i = 0; i < numStudents; i++) {
        overallAverage += averages[i]; 
    }
    
    overallAverage /= numStudents; 

    printf("%.2f\n\n", overallAverage); 

    printf("Hasil Siswa:\n");
    printf("%-15s", "Nama"); 
    for (int j = 1; j <= MAX_SCORES; j++) { 
        printf("Nilai %d   ", j);
    }
    printf("Rata-rata\n");

    for (int i = 0; i < numStudents; i++) {
        printf("%-15s", names[i]); 
        
        for (int j = 0; j < MAX_SCORES; j++) { 
            printf("%.2f   ", scores[i][j]);
        }
        
        printf("%.2f\n", averages[i]); 
    }
}
