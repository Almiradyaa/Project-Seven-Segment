//Dita Ayodya Al Mira-D121241008
//penggunaan nested loop

#include<stdio.h>
#define MAX 4 //jumlah max dari kolom dan baris

main(){
	
	int baris, kolom, hasil_kali;
	
	for(baris = 1; baris <= MAX; baris++) //loop luar
	{ 	for(kolom = 1; kolom <= MAX; kolom++) //loop dalam
			{hasil_kali = baris * kolom;
			 printf("%4d", hasil_kali);
			}
		printf("\n");
	}
}
