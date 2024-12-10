//Dita Ayodya Al Mira_D121241008
//penggunaan for untuk membentuk deret turun (loop)

#include<stdio.h>

main(){
	
	int bilangan;
	
	for(bilangan = 180; bilangan >= 15; bilangan -= 15) //pakai operator -= untuk membuat deret turun (pengurangan dgn selisih)
	/*U1 = 180 (bilangan pertama deret), Un = 15(bilangan terakhir deret), b = 15 (selisih antarbilangan)*/
		printf("%d\n", bilangan);
		
}
