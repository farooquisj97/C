#include<stdio.h>

int main()
{
    int i,n,factorial=1;
    printf("Enter a number\n");
    scanf("%d\n", &n);

    i = 1;
    while (i<=n)  {
        factorial = factorial*i;
        i++;
    }

    printf("Factorial of %d is %d\n", n, factorial);
    
    return 0;
}
