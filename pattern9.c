#include<stdio.h>

int main()
{
    int n,i,j,k=64;
    printf("Enter no. of rows: ");
    scanf("%d\n", &n);

    for (i=n; i>=1; i--) {
        for (j=1; j<=i; j++) {
            printf("%c ", j+k);
            
        }
        k++;
        printf("\n");
    }
    
    return 0;
}
