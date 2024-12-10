#include<stdio.h>
#include<stdlib.h>

main(){
	 FILE *pute;
	 
	 pute = fopen("pute.TXT", "w");
	 
	 fputs("pute oioi", pute);
	 
	 fclose(pute);
	 
	 return 0;
}
