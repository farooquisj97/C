#include <stdio.h>

void main() {
    
    int n,N[n],smallest,largest,i,j,k;

    printf("Enter number of elements: \n");
    scanf("%d", &n);

    printf("Enter %d elements:\n",n);

    for (i=0; i<n; i++){
        scanf("%d", &N[i]);
    }

    printf("\nThe elements are: ");
    for (i=0; i<n; i++){
        printf("%d ", N[i]);
    }

    printf("\n");


    smallest = N[0];
    for (j=0; j<n; j++) {
        if (smallest >= N[j])
            smallest = N[j];
    }
   

    largest = N[0];
    for (k=0; k<n; k++) {
        if (largest<=N[k])
            largest = N[k];        
    }
    
    printf("Smallest no. is %d\n", smallest);
    printf("Largest no. is %d\n", largest);
}