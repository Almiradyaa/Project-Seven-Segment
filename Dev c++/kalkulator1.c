//Dita Ayodya Al Mira_D121241008
//penggunaan else if dalam program kalkulator sederhana

#include<stdio.h>
main(){
	int valid_operator = 1; //valid operator diinisialisasikan dengan logika 1
	char operator;
	float number1, number2, result;
	
	printf("Masukkan 2 buah bilangan dan sebuah operator\n");
	printf("dengan format: number1 operator number2\n\n");
	scanf("%f %c %f", &number1, &operator, &number2); //meringkas penggunaan scanf 
	
	if (operator == '*')
		result = number1*number2;
	else if (operator == '/') 
		result = number1/number2;
	else if (operator == '+')
		result == number1+number2;
	else if (operator == '-')
		result == number1-number2;
	/*else if digunakan jika ada banyak kondisi yang harus diperiksa,
	 bisa diulang sebanyak yg diperlukan*/
	else
		valid_operator = 0;
		
	if(valid_operator)
		printf("\n%g %c %g is %g\n", number1, operator, number2, result);
	else
	printf("invalid operator!\n");
		
}
