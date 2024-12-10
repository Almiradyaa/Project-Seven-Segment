/*DITA AYODYA AL MIRA_D121241008*/
/*SOAL NOMOR 5 DAN 6*/

#include<stdio.h>

int total(int array[], int jumlah_elemen)
{
    int hasil = 0;
    for(int i = 0; i < jumlah_elemen; i++) {
        hasil += array[i];
    }
    return hasil;
}

int main(){
int array[] = {5,7,9};
    int jumlah_elemen = 3;
    
    int hasil = total(array, jumlah_elemen);
    printf("Hasil: %d\n", hasil);
    
    return 0;
}
