#include<stdio.h>

void main() {
	int n,i,k,rem,fact,sum;

	printf("Strong numbers between 1 and 9999 are:\n");

	for (i=2; i<9999; i++) {
		n = i;
		sum = 0;

		while(n>0){
			rem = n%10;
			fact = 1;

			for (k=rem; k>=1; k--){
				fact = fact * k;
			}

			sum = sum + fact;
			n = n/10;
		}

		if (sum==i)
		printf("%d\n",i);

	}
}