#include<stdio.h>

int fib (int n) {
    int Fn;
    if (n<=1){
        Fn=n;
        return Fn;
    }    
    Fn = fib(n-1) + fib(n-2);
    return Fn;
}

void main() {
    int n, res;
    printf("enter a number: ");
    scanf("%d", &n);
    res = fib(n);
    printf("%d", res);
}
