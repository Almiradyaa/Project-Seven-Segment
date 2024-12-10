//Dita Ayodya Al Mira-D121241008
//penggunaan while untuk menghitung jumlah karakter dalam kalimat

#include<stdio.h>

main(){
	char kar;
	int jumkar = 0, jumspasi = 0;
	
	puts("Masukkan sebuah kalimat dan akhiri dengan ENTER.\n");
	puts("Saya akan menghitung jumlah karakter pada kalimat tersebut.\n");
	
	while ((kar = getchar()) != '\n')
	/*selama karakter yang dibaca bukan \n, loop while akan terus berlanjut.
	hingga pengguna menekan Enter.*/
	/*Fungsi getchar() digunakan untuk membaca satu karakter dari keyboard.
	Nilai yang dibaca akan disimpan dalam variabel 'kar'*/
	{
		jumkar++;
		if (kar == ' ') jumspasi++;
	
	}
	
		printf("\njumlah karakter		= %d", jumkar);
		printf("\njumlah spasi			= %d", jumspasi);
}

