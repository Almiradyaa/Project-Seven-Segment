#include<stdio.h>

void main(){
	int Binary[100], number, i, j;
	printf("Enter a decimal number: \n");
	scanf("%d", &number);
	
	while(number>0)
	{ Binary[i] = number%2;
	  number = number/2;
	  i++;
	}
	for(j = i-1; j>=0; j--)
	printf("%d", Binary[j]);
}


