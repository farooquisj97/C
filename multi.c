#include<stdio.h>

void main(){
    int i,d=1;
  
    do{
        printf("Enter the number: ");
        scanf("%d",&i);
        if(i==0)
           break;
        d=d*i;
        else
            printf("Multiplication = %d\n",d);
        
    } while(i>0);
}