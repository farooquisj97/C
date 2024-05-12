#include<stdio.h>

int power (int a, int b) {
	int result=1;
	for (int i=1; i<=b; i++){
		result = result * a;
	}
	return result;

}

int main() {
int a, b, result;
printf("Enter number and power: \n");
scanf("%d %d", &a, &b);
result = power(a,b);
printf("%d raised to power %d is %d\n", a, b, result);
return 0;
}
