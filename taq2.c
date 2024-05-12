#include<stdio.h>

void main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age<18)
    printf("Not eligible to work");

    else {
        if (age<60)
        printf("Eligible to work");

        else 
        printf("May receive pension but not eligible to work");
    }

}