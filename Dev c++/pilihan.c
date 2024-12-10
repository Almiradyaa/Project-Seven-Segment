//Dita Ayodya Al Mira-D121241008
//penggunaan while untuk membaca Y atau T

#include<stdio.h>

main(){
	char pilihan;
	int sudah_benar = 0;
	
	printf("Pilihlah Y atau T.\n"); //program berlanjut jika salah satu pilihan sudah ditekan
	
	while(!sudah_benar)
	{	pilihan = getchar(); // Mengambil karakter input dari pengguna
		sudah_benar = (pilihan=='Y')||(pilihan=='y')||(pilihan=='T')||(pilihan=='t');
		// Memeriksa apakah input adalah Y, y, T, atau t
	}
	switch(pilihan)
	{	case 'Y':
		case 'y':
			puts("\nPilihan anda adalah Y");
			break;
		case 'T':
		case 't':
			puts("\nPilihan anda adalah T");
			break;
		}	
}
