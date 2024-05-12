#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=3, *j, **k;
    j = &i;
    k = &j;
    printf("\naddress of i = %u", &i);
    printf("\naddress of i = %u", j);
    printf("\naddress of i = %u", *k);
    printf("\naddress of j = %u", &j);
    printf("\naddress of j = %u", k);
    printf("\naddress of k = %u", &k);
  
    printf("\nvalue of j = %u", j);
    printf("\nvalue of k = %u", k);
    printf("\nvalue of i = %d", i);
    printf("\nvalue of i = %d", *(&i));
    printf("\nvalue of i = %d", *j);
    printf("\nvalue of i = %d", **k);
    return 0;
}
