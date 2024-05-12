#include<stdio.h>

/*
Decimal     Roman
1           i
5           v
10          x
50          l
100         c
500         d
1000        m
*/

int roman(int year)
{
    int r;
    r = year;

    printf("The year in Roman is written as: ");

    
    while (r >= 1000) {
        printf("m");
        if (r==1000)
        break;
        r = r-1000;
    }
    
    while (r >= 500) {
        printf("d");
        if (r==500)
        break;
        r = r-500;
    }
    
    while (r >= 100) {
        printf("c");
        if (r==100)
        break;
        r = r-100;
    }
    
    while (r >= 50) {
        printf("l");
        if (r==50)
        break;
        r = r-50;
    }
    
    while (r >= 10) {
        printf("x");
        if (r==10)
        break;
        r = r-10;
    }
    
    while (r >= 5) {
        printf("v");
        if (r==5)
        break;
        r = r-5;
    }
    
    while (r >= 1) {
        printf("i");
        r = r-1;
    }

}


void main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    roman(year);
}