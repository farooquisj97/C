#include <stdio.h>

int main()
{
    int n,rem,temp,sum=0,fact=1,i;
    printf("Enter a number\n");
    scanf("%d \n",&n);
    temp = n;

    while(n>0){
        rem = n%10;
        fact = 1;
        
        for (i=rem; i>=1; i--) {
            fact = fact*i;
        }

        sum = sum+fact;
        n = n/10;
    }

    if (sum==temp)
    printf("It is a strong number.");

    else
    printf("It is not a strong number. \nSum is %d",sum);
    return 0;
}
