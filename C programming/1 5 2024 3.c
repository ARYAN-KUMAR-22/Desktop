// WAP TO INPUT DETAILS OF N EMPLOYEE AND PRINT THE INFORMATION OF THOSE WITH THE SAME FIRST NAME

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char firstName[50];
    char lastName[50];
    int age;
    double salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input details of employees
    printf("Enter details of employees:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i+1);
        printf("First Name: ");
        scanf("%s", employees[i].firstName);
        printf("Last Name: ");
        scanf("%s", employees[i].lastName);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
    }

    // Check for employees with the same first name
    printf("\nEmployees with the same first name:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(employees[i].firstName, employees[j].firstName) == 0) {
                printf("Employee %d: %s %s, Age: %d, Salary: %.2lf\n", i+1, employees[i].firstName, employees[i].lastName, employees[i].age, employees[i].salary);
                printf("Employee %d: %s %s, Age: %d, Salary: %.2lf\n", j+1, employees[j].firstName, employees[j].lastName, employees[j].age, employees[j].salary);
            }
        }
    }

    return 0;
}
