#include<stdio.h>
 void main()  {

    int year;
    printf("enter year \n");
    scanf("%i", &year);

    if (year%400==0)
    prinf("year is a leap year \n");

    else if (year%100==0)
    prinf("year is not a leap year \n");

    else if (year%4==0)
    prinf("year is a leap year \n");

    else 
    prinf("year is not a leap year \n");

 }