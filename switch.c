#include <stdio.h>

void main()
{
    int opt;
    float a=5,b=10;
    printf("1==>addition \n2==>subtraction \n3==>multiplication \n4==>division \n");
    printf("enter a,b and option \n");
    scanf("%f %f %d\n", &a, &b, &opt);
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        printf("addition is = %f", a+b);
        break;
        case 2:
        printf("difference is = %f", a-b);
        break;
        case 3:
        printf("product is = %f", a*b);
        break;
        case 4:
        printf("ratio is = %f", a/b);
        break;
        default:
        printf("Have a nice day");
    }   
}

