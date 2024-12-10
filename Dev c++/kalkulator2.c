2//Dita Ayodya Al Mira_D121241008
//penggunaan switch dalam program kalkulator sederhana

#include<stdio.h>

main()
	{
	//menggunakan logika 1 agar valid operator dpt ditampilkan
	int valid_operator= 1; 
	char operator;
	float number1, number2, result;
	
	printf("Masukkan 2 buah bilangan dan sebuah operator\n");
	printf("dengan format: number1 operator number2\n\n");
	//meringkas penggunaan scanf 
	scanf("%f %c %f", &number1, &operator, &number2); 
	
	
	switch(operator){
	    case '+' : result = number1+number2; break; 
		case '-' : result = number1-number2; break;
		case '*' : result = number1*number2; break;
		case '/' : result = number1/number2; break; 
		/*"break" berguna untuk menghentikan eksekusi switch ketika kondisi telah terpenuhi*/
		default  : valid_operator = 0;
		} 
		/*kondisi "default" jika tidak kondisi yg terpenuhi maka diberi logika 0*/
		
		if(valid_operator)
			printf("%g %c %g is %g\n", number1, operator, number2, result); //menampilkan hasil jika salah satu kondisi terpenuhi
		else
			printf("Invalid operator!\n"); //menyatakan kondisi tidak ada yang terpenuhi
	}
