#include <stdio.h>

int factorial(int n) {
	int i, fact = 1;
	for (i=n; i>=1; i--){
		fact = fact*i;
	}
	return fact;
}


// using recursion
int Factorial(int n){
	int fact=1;
	if (n==1)
	fact = fact*1;
	else
	fact = n * Factorial(n-1);
	return fact;
}



void main() {
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Factorial of %d is %d\n", n, factorial(n));
	printf("Factorial of %d is %d\n", n, Factorial(n));
}

