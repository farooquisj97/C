#include<stdio.h>

void main()
{
    int row=1,i,j,k,l,a,n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for( i=n; i>=1; i--){
        
        for (j=1; j<=i; j++){
            a = j+64;
            printf("%c ", j+64);
        }

        if (row>1) {
            for (k=1; k<=2*(n-i-1)+1; k++){
                printf("  ");
            }
        }

        for (l=i; l>=1; l--){
            if (row==1) {
                if (l==1)
                break;
                
                printf("%c ",--a);
            }

            else
            printf("%c ", a--);
        }

        printf("\n");
        row++;

    }
         
}

