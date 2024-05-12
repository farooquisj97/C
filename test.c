#include <stdio.h>

void main() {
	char name[30], raw;
	printf("Enter your name: ");
	
	fgets(name,30,stdin);
	printf("Hi %s \n", name);
}
