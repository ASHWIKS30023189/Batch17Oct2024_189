#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure to store employee data
struct Employee {
    int id;            // Employee ID
    char name[100];    // Employee name
    float salary;      // Employee salary
};

// Function to read employee data from a file and store it in the structure
int read_employee_data(const char *filename, struct Employee employees[]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return -1; // Return an error code if file can't be opened
    }

    int count = 0;
    while (fscanf(file, "%d %s %f", &employees[count].id, employees[count].name, &employees[count].salary) != EOF) {
        count++;
    }

    fclose(file);  // Close the file after reading
    return count;  // Return the number of employee records read
}

// Function to print the employee records
void print_employee_records(struct Employee employees[], int count) {
    printf("Employee Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

int main(int argc, char *argv[]) {
    // Check if the filename is provided as a command-line argument
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;  // Exit with an error code if filename is not provided
    }

    // Declare an array to store employee data
    struct Employee employees[100];  // Supports up to 100 employees

    // Read employee data from the file
    int count = read_employee_data(argv[1], employees);
    if (count == -1) {
        return 1;  // Exit if there was an error reading the file
    }

    // Print the employee records
    print_employee_records(employees, count);

    return 0;
}

