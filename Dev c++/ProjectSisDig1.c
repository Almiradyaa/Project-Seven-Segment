//D121241008_DITA AYODYA AL MIRA
// Konversi angka masukan ke 7 Segment Display dalam bentuk BCD

#include <stdio.h>

void displaySegment(int number) {
    // array 2D untuk menyimpan pola seven segment (a,b,c,d,e,f,g)
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
    
    printf("a = %d\n", segments[number][0]);
    printf("b = %d\n", segments[number][1]);
    printf("c = %d\n", segments[number][2]);
    printf("d = %d\n", segments[number][3]);
    printf("e = %d\n", segments[number][4]);
    printf("f = %d\n", segments[number][5]);
    printf("g = %d\n", segments[number][6]);
}

int main() {
    int input;
    
    printf("Masukkan angka (0-9): ");
    scanf("%d", &input);
    
    if(input >= 0 && input <= 9) {
        displaySegment(input);
    } else {
        printf("Input tidak valid! Masukkan angka 0-9.\n");
    }
    
    return 0;
}

