#include <stdio.h>
#include <stdlib.h>

struct employee {
    int salary;
    char name[50];
    int id;
    int age;
};
int main() {
    struct employee employees[3];  // Array to store 3 employees

    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d",&employees[i].age);
        printf("Salary: ");
        scanf("%d", &employees[i].salary);
        printf("========================\n");
    }


    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %d\n", employees[i].salary);
        printf("------------------------\n");
    }

    return 0;
}
