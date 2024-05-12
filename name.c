#include<stdio.h>

//PLEASE NOTE THAT THIS EXPERIMENT FAILED SUCCESSFULLY
//Possible error: garbage value interference

void main() {

    char name[20];
    int i,n;
    //printf("Enter number of letters in your name: ");
    //scanf("%d \n",&n);
    printf("Enter your name: ");

    //for (i=0; i<=n; i++)  
    //    scanf("%c", &name[i]);
    
    fgets(name, 20, stdin);

    printf("Hello %s", name);
    
    //for (i=0; i<=n; i++)  
    //    printf("%c", &name[i]);
    
}