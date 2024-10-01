#include <stdio.h>
#include <string.h>

// Define the structure for employee
typedef struct {
    int emp_no;
    char emp_name[50];
    float salary;
} Employee;

// Function to input employee data
void inputEmployee(Employee emp[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Enter data for employee %d:\n", i + 1);
        printf("Enter employee number: ");
        scanf("%d", &emp[i].emp_no);
        printf("Enter employee name: ");
        scanf("%s", emp[i].emp_name);
        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);
    }
}

// Function to display employee data
void displayEmployee(Employee emp[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Employee %d data:\n", i + 1);
        printf("Employee Number: %d\n", emp[i].emp_no);
        printf("Employee Name: %s\n", emp[i].emp_name);
        printf("Employee Salary: %.2f\n", emp[i].salary);
        printf("\n");
    }
}

int main() {
    Employee employees[3];

    inputEmployee(employees);
    displayEmployee(employees);

    return 0;
}
