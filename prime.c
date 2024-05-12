#include<stdio.h>

void main() {
	int n,i,count=0;
	printf("Enter num: ");
	scanf("%d", &n);
	for(i=2; i<n; i++){
		if (n%i==0){
			count++;
			break;			
		}
	}
	if (count==0)
		printf("PRIME\n");
	else
		printf("NOT PRIME\n");

}
