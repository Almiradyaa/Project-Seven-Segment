/*Dita Ayodya Al Mira-D121241008*/

/*File program : diskrim.c
Menghitung diskriminan pers kuadrat ax^2 + bx + c = 0*/

#include<stdio.h>

main(){
    float a,b,c,d; /*Declare variables*/
    a = 1;         /*Assign value to a*/
    b = 7;         /*Assign value to b*/
    c = 6;         /*Assign value to c*/

    d = b*b-4*a*c; /*Assign value to d, discriminant formula*/
    printf("Diskriminan = %d\n",d); /*to display the value of d*/
    
}