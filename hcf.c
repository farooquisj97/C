#include<stdio.h>

int hcf (int n1, int n2) {
    int gcd;
    gcd = n1/n2;
    if (n2==0)
    return n1;
    hcf (n1, gcd);
}

int main(int argc, char const *argv[])
{
    int n1, n2, gcd;
    printf("Enter two numbers: \n");
    scanf("%d %d", &n1, &n2);
    gcd = hcf(n1, n2);
    printf("gcd = %d\n", gcd);
    return 0;
}
