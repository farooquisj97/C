#include<stdio.h>

void areacircum (int *r, float *area, float *circum) {
*area = 3.14* *r * *r;
*circum = 2 * 3.14 * *r;
}

void main() {
int r; 
float area, circum;
printf ("Enter radius: ");
scanf("%d", &r);
areacircum(&r, &area, &circum);
printf("Area = %f \nCircumference = %f\n", area, circum);
}
