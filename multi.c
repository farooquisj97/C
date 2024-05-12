#include<stdio.h>

void main() {
int multi = 1, n=1;

while (n!=0) {
printf("n = ");
scanf("%d", &n);
if (n!=0){
multi = multi*n;
printf("Multiplication is %d\n", multi);
}
}
printf("program ended\n");

}
