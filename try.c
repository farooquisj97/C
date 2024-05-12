#include<stdio.h>
change(int *p){
    *p = * p+10;
}

void main(){
    int *x =20;
    change (&x);
    printf("%d",x);   
}