#include <stdio.h>

void prime_fact(int num) {
	int i=2;
	while(num>1) {
		if (num%i == 0) {
			printf("%d ", i);
			num = num/i;
			continue;
		}
		i++; 
	}

}

void main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	prime_fact(n);
	printf("\n");
}

