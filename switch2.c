#include <stdio.h>

void main()
{
    int x, choice, i, rem, count=0, n, multi=1, digit;
    printf("\n1==> Check whether number is prime\n2==> Find multiplication of digits of a number\nEnter your choice:\n");
    scanf("%d",&choice);
    printf("Enter the number:\n");
    scanf("%d", &x);
    switch(choice)
    {
        case 1:
        for (i=2; i<x; i++){
            rem = x%i;
            if (rem==0)
            count = count+1;
        }
        if (count==0)
        printf("%d is prime\n", x);
        else 
        printf("%d is not prime\n", x);
        break;
        
        case 2:
        n = x;
        while(n>0){
            digit = n%10;
            multi = multi*digit;
            n = n/10;
        }
        printf("Multiplication of digits of %d is %d\n", x, multi);
        break;
        
        default:
        printf("Error: invalid choice\n");
    }   
}