#include <stdio.h>

int gcd (int a, int b) {
	int q, c;
	while (c!=0) {
		q = a/b;
		c = a - q*b;
		if (c==0)
			break;
		else
			gcd(b, c);
	}
	return c;
}

void main() {
	int n1, n2, res, q;
	printf("enter n1 and n2 such that n1>=n2: \n");
	scanf("%d %d", &n1, &n2);
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
	//res = gcd(n1,n2);
	printf("Highest commo factor is %d\n", n2);
}	





