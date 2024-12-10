/*Dita Ayodya Al Mira-D121241008*/

#include<stdio.h>

main(){

char letters[10]; /* menyatakan sebuah array dengan 10 elemen bertipe char (nomor 1) */ 
   	 letters[3] = 'Z'; /* menyatakan "Z" sebagai elemen ke-4 dalam array (nomor 2) */

int total = 0; /* menyatakan nilai total sebagai 0 */
int numbers[5] = {1, 2, 3, 4, 5}; /* menyatakan sebuah array dengan 5 elemen bertipe int */
	for (int i = 0; i < 5; i++) {
    total += numbers[i]; /* menambahkan tiap elemen dengan nilai total */
}
printf("Total: %d\n", total); /* print nilai total */ 	 // (nomor 3)
 
float balances[3][5]; /* menyatakan sebuah array dengan 3 baris dan 5 kolom elemen bertipe float (nomor 4)*/  
float total_balances = 0.0; /* menyatakan nilai total sebagai 0.0 */
	for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
        total_balances += balances[i][j]; /* menambah tiap elemen dengan nilai total */
    }
}
printf("Total balances: %.2f\n", total_balances); /* print nilai total (nomor 5) */
   }
   
