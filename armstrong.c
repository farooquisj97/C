#include<stdio.h>

int cube(int i) {
	return i*i*i;
}



int armstrong(int i) {
	int sum=0, n, rem;
	n = i;
	while (n>0) {
		rem = n % 10;
		sum = sum + cube(rem);
		n = n/10;			
	}
	if (i==sum)
		printf("%d\n", i);
	
		
	return 0;
}


void main() {

	int i;
		
	for (i=1; i<9999; i++)
		armstrong(i);
}
