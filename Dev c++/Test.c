#include<stdio.h>

main(){
	int i, n, rem, sum=0, j;
	printf("Enter a binary number: ");
	scanf("%ld", &n);
	i = 0;
	while (n>0)
	{
		rem = n%10;
		sum = sum+rem*pow(2,i);
		n = n/10;
		i++;
	}
	printf("%d", sum);
	
	int decimal = 0;
    int base = 1;
	
	char hex[100];
    int index = 0;

    while (decimal > 0) {
        int remainder = decimal % 16; 
        if (remainder < 10) {
            hex[index] = remainder + '0'; 
        } else {
            hex[index] = remainder - 10 + 'A'; 
        }
        decimal = decimal / 16; 
        index++;
    }

    printf("Hexadecimal: ");
    for (j = index - 1; j >= 0; j--) {
        printf("%c", hex[j]); 
    }
    printf("\n");
}
