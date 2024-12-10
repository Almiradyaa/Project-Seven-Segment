/*Dita Ayodya Al Mira-D121241008*/

/*File program : pre_post.c, pre & post increment operator usage*/

#include<stdio.h>
main(){
    int a= 1, b;

    b = ++a;                             /*a = a+1, b = a*/
    printf("b = %d, a = %d\n", b, a);

    b = a++;                             /*b = a, a = a+1*/
    printf("b = %d, a = %d\n", b, a);
    
}
