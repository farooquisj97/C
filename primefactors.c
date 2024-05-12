#include<stdio.h>

void primefact (int number) {
    int i;

    for (i=2; i<=number; i++)
    {
        if (number%i==0){
            printf("%d ",i);
            number = number/i;
            i--;
        }
    }
}

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    primefact(num);
}