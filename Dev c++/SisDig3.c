#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

void displaySevenSegment(int number) {
    // Array untuk pola segment setiap angka 0-9
    int segments[10][7] = {
        {1,1,1,1,1,1,0}, // 0
        {0,1,1,0,0,0,0}, // 1
        {1,1,0,1,1,0,1}, // 2
        {1,1,1,1,0,0,1}, // 3
        {0,1,1,0,0,1,1}, // 4
        {1,0,1,1,0,1,1}, // 5
        {1,0,1,1,1,1,1}, // 6
        {1,1,1,0,0,0,0}, // 7
        {1,1,1,1,1,1,1}, // 8
        {1,1,1,1,0,1,1}  // 9
    };

    // Array untuk representasi biner
    char *binary[10] = {
        "0000", "0001", "0010", "0011", "0100",
        "0101", "0110", "0111", "1000", "1001"
    };

    
    printf("\nStatus Segment untuk angka %d:\n", number);
    printf("a = %d\n", segments[number][0]);
    printf("b = %d\n", segments[number][1]);
    printf("c = %d\n", segments[number][2]);
    printf("d = %d\n", segments[number][3]);
    printf("e = %d\n", segments[number][4]);
    printf("f = %d\n", segments[number][5]);
    printf("g = %d\n", segments[number][6]);

    // Tampilkan representasi biner
    printf("\nRepresentasi Biner: %s\n", binary[number]);

    // Tampilkan visualisasi seven segment
    printf("\nVisualisasi Seven Segment:\n");
    //menggunakan ternary operator
    printf(" %c%c%c\n", segments[number][0] ? '_' : ' ', 
           segments[number][0] ? '_' : ' ', 
           segments[number][0] ? '_' : ' ');
    printf("%c   %c\n", segments[number][5]? '|' : ' ',
           segments[number][1]? '|' : ' ');
    printf(" %c%c%c\n", segments[number][6]? '_' : ' ', 
           segments[number][6] ? '_' : ' ', 
           segments[number][6] ? '_' : ' ');
    printf("%c   %c\n", segments[number][4]? '|' : ' ',
           segments[number][2] ? '|' : ' ');
    printf(" %c%c%c\n", segments[number][3]? '_' : ' ', 
           segments[number][3] ? '_' : ' ', 
           segments[number][3] ? '_' : ' ');
}

int main() {
    char input[10]; 
    int number;
    int running = 1; 

    while(running) {
        printf("\nMasukkan angka (0-9) atau 'X' untuk keluar: ");
        scanf("%s", input);
        
        input[0] = toupper(input[0]);
        
        if(input[0] == 'X') {
            printf("Program berakhir. Terima kasih!\n");
            running = 0; 
            continue;
        }
        
       number = atoi(input);
        
        if(number >= 0 && number <= 9) {
            displaySevenSegment(number);
        } else {
            printf("Input tidak valid! Masukkan angka 0-9 atau 'X' untuk keluar.\n");
        }
    }

    return 0;
}

