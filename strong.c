#include<stdio.h>

int factorial(int i) {

	if (i==0 || i==1)
	return 1;
	else
	return i*factorial(i-1);
}

int strong(int i) {
	int sum=0, n, rem;
	n = i;
	while (n>0) {
		rem = n % 10;
		sum = sum + factorial(rem);
		n = n/10;			
	}
	if (i==sum)
		printf("%d\n", i);
	
		
	return 0;
}


void main() {

	int i;
		
	for (i=1; i<9999; i++)
		strong(i);
}
