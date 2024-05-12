#include<stdio.h>

struct employee {
    char emp_name[50];
    int emp_id;
    float salary;
    char address[50];
};

void main() {
    struct employee e[5];
    int i=1;
    char raw;
    for(i=1; i<=5; i++){
        printf("Enter details of employee %d\n", i);
        printf("Name: ");
        gets(e[i].emp_name);        
        printf("ID: ");
        scanf("%d",&e[i].emp_id);        
        printf("Salary: ");
        scanf("%f", &e[i].salary);        
        printf("Address: ");
        //gets(e[i].address);
        scanf("%s", &e[i].address);
        scanf("%c", &raw);
        printf("\n");
    }
    printf ("Details of employees with salary more than 4000:\n");
    for(i=1; i<=5; i++){
        if (e[i].salary>4000){
            printf("\nName: %s", e[i].emp_name);
            printf("\nID: %d", e[i].emp_id);            
            printf("\nSalary: %.2f", e[i].salary);            
            printf("\nAddress: %s", e[i].address);
            printf("\n");
        }
    }
}