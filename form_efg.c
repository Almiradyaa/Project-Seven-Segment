/*Dita Ayodya Al Mira-D121242008*/

/*File program : form_efg.c
Difference of %e, %f, and %g formats*/

#include<stdio.h>

main(){
    float a = 192.25;

    printf("Format e => %e\n", a); /*%e format display value in exponential notation*/
    printf("Format f => %f\n", a); /*display value with 6 digits of precision */
    printf("format g => %g\n", a); /*display fixed precision (input = output)*/
}
