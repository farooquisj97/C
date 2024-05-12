#include <stdio.h>

void main() {
    int num, n, rev=0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    while(n>0) {
        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }

    printf("The reverse of %d is %d", num, rev);
}