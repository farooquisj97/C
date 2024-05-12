#include <stdio.h>

void main() {
    int x, y;
    char ch;
    
    printf("A==> Bitwise AND\nB==> Bitwise OR\nC==> Bitwise XOR\nD==> Bitwise Complement\n");
    printf("Enter your choice: ");
    scanf("%c", &ch);
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch (ch)
    {
    case 'A':
        printf("%d & %d = %d", x, y, x&y);
        break;

    case 'B':
        printf("%d | %d = %d", x, y, x|y);
        break;

    case 'C':
        printf("%d ^ %d = %d", x, y, x^y);
        break;

    case 'D':
        printf("~%d = %d  \n~%d = %d", x, ~x, y, ~y);
        break;
    
    default:
        printf("Invalid choice");
    }
}