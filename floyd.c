#include <stdio.h>

void main() 
{
	int i, j, space, n, x=1;
	
	printf("rows? ");
	scanf("%d", &n);
		
	for (i=1; i<=n; i++) 
	{
		for (space=n-i; space>=0; space--)
		{
			printf("\t");
			
		}
		
		for (j=1; j<=i; j++)
		{
			printf("%d\t\t", x);
			x++; 
		}
		printf("\n");
	}
}
