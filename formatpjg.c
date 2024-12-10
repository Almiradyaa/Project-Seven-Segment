/*Dita Ayodya Al Mira-D121241008*/

/*File program : formatpjg.c
penggunaan format panjang medan data*/

#include<stdio.h>

main(){
    int a = 26;
    float b = 99.0;

    printf("Tanggal: %10d\n", a); /*panjang medan untuk 26 sepanjang 10 karakter*/
    printf("Nilai: %12.0f\n", b); /*panjang medan untuk 99.0 sepanjang 12 karakter dgn precision 0*/
    printf("%19s\n", "Bahasa C"); /*ditampilkan rata kanan dgn panjang medan 19 karakter*/
    printf("%-5s\n", "Bahasa C"); /*ditampilkan rata kiri dgn panjang medan 5 karakter*/
}