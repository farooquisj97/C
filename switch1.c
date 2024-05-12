#include <stdio.h>

int main()
{
    int age,marks;
    printf("enter  your age\n");
    scanf("%d\n", &age);

    printf("enter your marks\n");
    scanf("%d",&marks);

    switch (age)
    {
    case 3: 
        printf(" age is 3\n");
        break;
    
    case 13: 
        printf(" age is 13\n");
        break;

    case 23: 
        printf(" age is 23\n");
        break;
    
    default:
        printf("age is not 3, 13 or 23\n");
        break;
    }
    return 0;
}
