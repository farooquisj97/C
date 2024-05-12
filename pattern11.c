#include<stdio.h>

void main()
{
    int i,j,k,l,n=5;

    for( i=1; i<=n; i++){

        for (k=n; k>i; k--){
            printf("  ");
        }

        for (j=0; j<i; j++){
            printf("%d ", i+j);
        }

        if(i>1)
        for (l=2*(i-1); l>=i; l--){
            printf("%d ", l);
        }

        printf("\n");

    }
         
}

