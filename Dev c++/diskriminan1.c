//Dita Ayodya Al Mira_D121241008
//penggunaan if bersarang untuk menghitung diskriminan dan akar-akar persamaan kuadrat

#include <stdio.h>
#include <math.h> //header untuk fungsi matematika (untuk mengenali fungsi (sqrt))
main(){
	float a, b, c, d = 0;
	double x1, x2, imaginair;
	printf("MENCARI AKAR-AKAR PERSAMAAN KUADRAT ax^2+bx+c=0\n");
	//meminta nilai a,b,dan c
	printf("\nMasukkan nilai a: ");
	scanf("%f", &a);
	printf("\nMasukkan nilai b: ");
	scanf("%f", &b);
	printf("\nMasukkan nilai c: ");
	scanf("%f", &c);
	//menghitung diskriminan
	d = b*b - 4*a*c;
	//penggunaan if bersarang
	if(d==0)
	{	x1=-b/(2*a);
		 printf("\nDua akar real kembar yaitu: \n");
		 printf("x1=x2=%g\n", x1);}
	else
	{	x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
			printf("\nDua akar real berlainan yaitu: \n");
			printf("x1= %g\n", x1);
			printf("x2= %g\n", x2);}
	else
	{	imaginair=(sqrt(-d)/(2*a)); //rumus untuk nilai akar imajiner (nilai diskriminan<0)
		x1=-b/(2*a);
			printf("\nDua akar imaginair berlainan yaitu: \n");
			printf("x1= %g+&gi\n", x1, imaginair);
			printf("x2= %g+&gi\n", x2, imaginair);}	
}
