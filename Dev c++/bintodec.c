#include<stdio.h>

main(){
	int i, n, rem, sum=0;
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
}
