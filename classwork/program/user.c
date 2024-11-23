
#include <stdio.h>
#include <string.h>
 
#define MAX_EMPLOYEES 3

struct Employee {
    int id;
    char name[50];
    float salary;
};

void displayEmployees(struct Employee emp[], int count) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
}
void searchEmployeeByID(struct Employee emp[], int count, int id) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("Employee Found: ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", id);
    }
}
void searchEmployeeByName(struct Employee emp[], int count, char name[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(emp[i].name, name) == 0) {
            printf("Employee Found: ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with name %s not found.\n", name);
    }
}
void searchEmployeesBySalary(struct Employee emp[], int count) {
    int found = 0;
    printf("\nEmployees with salary between 6000 and 10000:\n");
    for (int i = 0; i < count; i++) {
        if (emp[i].salary >= 6000 && emp[i].salary <= 10000) {
            printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
            found = 1;
        }
    }
    if (!found) {
        printf("No employees found with salary between 6000 and 10000.\n");
    }
}
 
void updateEmployeeName(struct Employee emp[], int count, int id, char newName[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            strcpy(emp[i].name, newName);
            printf("Employee name updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", id);
    }
}
 
int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int choice, id, count = 0;
    char name[50], newName[50];
    float salary;
 
   
    while (count < MAX_EMPLOYEES) {
        printf("\nEnter details for Employee %d\n", count + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &employees[count].id);
        printf("Enter Employee Name: ");
        scanf(" %[^\n]%*c", employees[count].name); 
        printf("Enter Employee Salary: ");
        scanf("%f", &employees[count].salary);
        count++;
    }
 
    do {
        printf("\nMenu:\n");
        printf("1. Display all employees\n");
        printf("2. Search employee by ID\n");
        printf("3. Search employee by Name\n");
        printf("4. Search employees with salary between 6000 and 10000\n");
        printf("5. Update employee name\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 
        switch (choice) {
            case 1:
                displayEmployees(employees, count);
                break;
            case 2:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                searchEmployeeByID(employees, count, id);
                break;
            case 3:
                printf("Enter Employee Name to search: ");
                scanf(" %[^\n]%*c", name);
                searchEmployeeByName(employees, count, name);
                break;
            case 4:
                searchEmployeesBySalary(employees, count);
                break;
            case 5:
                printf("Enter Employee ID to update name: ");
                scanf("%d", &id);
                printf("Enter new name: ");
                scanf(" %[^\n]%*c", newName);
                updateEmployeeName(employees, count, id, newName);
                break;
            case 6:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);
 
    return 0;
}

