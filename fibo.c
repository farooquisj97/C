#include<stdio.h>

int fibo(int n) {
	int fn;
	if (n==1 || n==2)
	fn = 1;
	else
	fn = fibo(n-1) + fibo(n-2);
	return fn;
}

void main() {
	int n,i;
	printf("Enter number of terms: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
		printf("%d ", fibo(i));
	printf("\n");
}
