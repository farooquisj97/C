#include<stdio.h>

void main() {
    int n, space, i, digit, v, value=1;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        for (space=n-i+1; space>=1; space--){
            printf("\t");
        }

        v = value;
        while (v>0) {
            digit = v%10;
            printf("%d\t\t");
            v = v/10;
        } 

       /* for (space=n-i+1; space>=1; space--){
            printf("\t");
        }
        printf("**%d**", value);
        */
          
        value = value*11;
        printf("\n");
    }
}