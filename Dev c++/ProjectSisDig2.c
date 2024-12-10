#include <stdio.h>
#include <string.h>

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

int binaryToDecimal(char *binary) {
    int decimal = 0;
    int power = 1;
    int len = strlen(binary);
    
    for(int i = len-1; i >= 0; i--) {
        if(binary[i] == '1') {
            decimal += power;
        }
        power *= 2;
    }
    return decimal;
}

void displaySevenSegment(int number) {
    printf(" %c%c%c%c\n", segments[number][0] ? '_' : ' ', 
           segments[number][0] ? '_' : ' ',
           segments[number][0] ? '_' : ' ',
           segments[number][0] ? '_' : ' ');
    
    printf("%c    %c\n", segments[number][5] ? '|' : ' ',
           segments[number][1] ? '|' : ' ');
    
    printf("%c%c%c%c%c\n", segments[number][6] ? '_' : ' ',
           segments[number][6] ? '_' : ' ',
           segments[number][6] ? '_' : ' ',
           segments[number][6] ? '_' : ' ',
           segments[number][6] ? '_' : ' ');
    
    printf("%c    %c\n", segments[number][4] ? '|' : ' ',
           segments[number][2]? '|' : ' ');
    
    printf(" %c%c%c%c\n", segments[number][3]? '_' : ' ',
           segments[number][3] ? '_' : ' ',
           segments[number][3] ? '_' : ' ',
           segments[number][3] ? '_' : ' ');
}

int main() {
    char binary[5];
    
    while(1) {
        printf("\nMasukkan kode biner 4 digit (0000-1001) atau 'X' untuk keluar: ");
        scanf("%s", binary);
        
        
        if(binary[0] == 'x' || binary[0] == 'X') {
            printf("Program selesai.\n");
            break;
        }
        
        if(strlen(binary) != 4) {
            printf("Error: Masukkan harus 4 digit!\n");
            continue;
        }
        
        int valid = 1;
        for(int i = 0; i < 4; i++) {
            if(binary[i] != '0' && binary[i] != '1') {
                valid = 0;
                break;
            }
        }
        
        if(!valid) {
            printf("Error: Masukkan hanya boleh 0 dan 1!\n");
            continue;
        }
        
        int decimal = binaryToDecimal(binary);
        
        if(decimal > 9) {
            printf("Error: Kode biner harus merepresentasikan angka 0-9!\n");
            continue;
        }
        
        printf("\nKode Biner: %s\n", binary);
        printf("Nilai Desimal: %d\n", decimal);
        printf("\nTampilan Seven Segment:\n");
        displaySevenSegment(decimal);
    }
    
    return 0;
}

