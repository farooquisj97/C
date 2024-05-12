#include <stdio.h>

int main() {

	int n, multi=1;
	
	while (1) {
		printf("Enter number: ");
		scanf("%d", &n);
		multi = multi*n;

		if (n==0)
		break;

		else 
		printf("Multipliction = %d\n", multi);
	}  
	
	return 0;
}