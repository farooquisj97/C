#include<stdio.h>

void main() {

char ch;
printf("Enter character: ");
scanf("%c", &ch);

if (ch>=65 && ch<=90){
printf("%c is an uppercase alphabet\n", ch);
printf("Lowercase is %c\n", ch+32);
}

else if (ch>=97 && ch<=122){
printf("%c is an uppercase alphabet\n", ch);
printf("Uppercase is %c\n", ch-32);
}

else if (ch>=48 && ch<=57){
printf("%c is a digit\n", ch);
}

else
printf("%c is a special symbol\n", ch);

}
