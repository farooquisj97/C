#include <stdio.h>

void main(){

    int num, n, rev=0, digit;
    printf("enter a number: ");
    scanf("%d", &num);

    while(num>0)
    {
        digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
    }

    //printf("%d",rev);

    while(rev>0)
    {
    n = rev%10;
    printf("%d ",n);
    rev = rev/10;
    }
}