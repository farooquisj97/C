#include<stdio.h>

int power(int x, int y)
{
    int power=1, i;

    for(i=1; i<=y; i++)
    power = power * x;

    return power;
}

int main() 
{
    int a=10, b=5, c;
    c = power(a,b);
    printf("%d raised to the power %d is %d", a, b, c);
}
