#include <stdio.h>

void main() {
    int num,n,i,factors=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i=2; i<num; i++)
    {
        n = num%i;
        if (n==0){
            factors=factors+1;
            printf("%d ",i);
        }

    }

    if (factors==0)
    printf("\nThe number is a prime number.");

    else
    printf("\nThe number is not a prime number.");
}