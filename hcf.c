#include <stdio.h>

int hcf (int n1, int n2) {
	int q, res;
	do {
		q = n1/n2;
		res = n1 - q*n2;
		if (res==0)
			break;
		else {
			n1 = n2;
			n2 = res;	
		}
	} while (res!=0);
	return n2;
}

void main() {
	int n1, n2, res, q;
	printf("enter two nos: \n");
	scanf("%d %d", &n1, &n2);
	res = hcf(n1,n2);
	printf("Highest common factor is %d\n", res);
}	





