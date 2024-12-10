//Dita Ayodya Al Mira_D121241008
//penggunaan if-else untuk menyeleksi bilangan pembagi

#include <stdio.h>

main(){
	
	float a, b; //deklarasi variable
	
	
	printf("Masukkan nilai a : ");
	scanf("%f", &a); //meminta input dengan scanf
	
	printf("Masukkan nilai b : ");
	scanf("%f", &b);
	
	if (b == 0) //memasukkan syarat
		printf("\n&g dibagi nol = Tak Berhingga\n", a);
    else 	   //memasukkan opsi keadaan lain	
    	printf("\n%g dibagi dengan %g = &g\n", a, b, a/b);
    	
}
