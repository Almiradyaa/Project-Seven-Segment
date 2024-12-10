/*Dita Ayodya Al Mira-D121241008*/

/* File program : lingkaran.c
Menghitung keliling dan luas lingkaran */

#include<stdio.h>
main()
{
    double radius, Keliling, Luas;

    printf("Masukkan Jari-jari lingkaran : ");
    scanf("%lf", &radius);

    Keliling = 2 * 3.14 * radius; 
    Luas = 0.5 * 3.14 * radius * radius;

    printf("\n Data Lingkaran \n");
    printf("Jari-jari = %8.2lf\n", radius);
    printf("Keliling = %8.2lf\n", Keliling);
    printf("Luas = %8.2lf\n", Luas);
}