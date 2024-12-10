//Dita Ayodya AL Mira-D1212411008
//penggunaan do-while untuk membaca Y atau T

#include<stdio.h>

main(){
	
	char pilihan;
	int sudah_benar;
	
	printf("pilihlah Y atau T.\n");
	
	do{
		pilihan = getchar(); // Mengambil karakter input dari pengguna
		sudah_benar = (pilihan=='Y')||(pilihan=='y')||(pilihan=='T')||(pilihan=='t');
	}
	while(!sudah_benar); //loop terus berjalan sampai sudah_benar bernilai salah
	
	switch(pilihan)
	{	case 'Y':
		case 'y':
			puts("\nPilihan anda adalah Y");
			break;
		case 'T':
		case 't':
			puts("\nPilihan anda adalah T");
			break;}
}
