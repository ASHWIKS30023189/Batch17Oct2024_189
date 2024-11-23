/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Employee {
    int id;
    char name[50];
    float salary;
} Employee;

typedef struct Stack {
    Employee *arr;     
    int top;          
    int capacity;    
} Stack;


Stack* createStack(int capacity) {
    Stack *stack = (Stack*) malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (Employee*) malloc(capacity * sizeof(Employee));
    return stack;
}

int isFull(Stack *stack) {
    return stack->top == stack->capacity - 1;
}


int isEmpty(Stack *stack) {
    return stack->top == -1;
}

void push(Stack *stack, int id, const char *name, float salary) {
    if (isFull(stack)) {
        printf("Stack is full. Cannot add more records.\n");
        return;
    }
    
    stack->top++;
    stack->arr[stack->top].id = id;
    strcpy(stack->arr[stack->top].name, name);
    stack->arr[stack->top].salary = salary;
    printf("Employee added: %s (ID: %d, Salary: %.2f)\n", name, id, salary);
}


Employee pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. No records to pop.\n");
        Employee empty = {0, "", 0.0};  
        return empty;
    }

    Employee poppedEmployee = stack->arr[stack->top];
    stack->top--;
    return poppedEmployee;
}


void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. No employee records to display.\n");
        return;
    }

    printf("Employee Records (from top to bottom):\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", stack->arr[i].id, stack->arr[i].name, stack->arr[i].salary);
    }
}

void freeStack(Stack *stack) {
    free(stack->arr);
    free(stack);
}

int main() {
    
    Stack *employeeStack = createStack(3);

    
    push(employeeStack, 101, "Alice", 50000.0);
    push(employeeStack, 102, "Bob", 60000.0);
    push(employeeStack, 103, "Charlie", 55000.0);
    
    
    display(employeeStack);

    
    Employee popped = pop(employeeStack);
    if (popped.id != 0) {  
        printf("\nPopped Employee: ID: %d, Name: %s, Salary: %.2f\n", popped.id, popped.name, popped.salary);
    }

    
    display(employeeStack);

    
    freeStack(employeeStack);

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Employee structure to store employee information
typedef struct Employee {
    int id;
    char name[50];
    float salary;
} Employee;

// Stack structure to manage employee records
typedef struct Stack {
    Employee *arr;  // Dynamic array to hold employee records
    int top;        // Index of the top of the stack
    int capacity;   // The maximum number of employees the stack can hold
} Stack;

// Function to create a stack with dynamic memory allocation
Stack* createStack(int capacity) {
    Stack *stack = (Stack*) malloc(sizeof(Stack));  // Allocate memory for the stack
    stack->capacity = capacity;  // Set the capacity
    stack->top = -1;  // Initialize top index to -1 (empty stack)
    stack->arr = (Employee*) malloc(capacity * sizeof(Employee));  // Allocate memory for employee records
    return stack;
}

// Function to check if the stack is full
int isFull(Stack *stack) {
    return stack->top == stack->capacity - 1;
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to push an employee record onto the stack
void push(Stack *stack, int id, const char *name, float salary) {
    if (isFull(stack)) {
        // If stack is full, double the capacity
        stack->capacity *= 2;  // Increase the capacity
        stack->arr = (Employee*) realloc(stack->arr, stack->capacity * sizeof(Employee));  // Reallocate memory
        printf("Stack capacity doubled to %d.\n", stack->capacity);
    }

    stack->top++;  // Move the top index up
    stack->arr[stack->top].id = id;
    strcpy(stack->arr[stack->top].name, name);
    stack->arr[stack->top].salary = salary;
    printf("Employee added: %s (ID: %d, Salary: %.2f)\n", name, id, salary);
}

// Function to pop an employee record from the stack
Employee pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. No records to pop.\n");
        Employee empty = {0, "", 0.0};  // Return an empty record if the stack is empty
        return empty;
    }

    Employee poppedEmployee = stack->arr[stack->top];
    stack->top--;  // Decrease the top index
    return poppedEmployee;
}

// Function to display all employee records in the stack
void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. No employee records to display.\n");
        return;
    }

    printf("\nEmployee Records (Top to Bottom):\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", stack->arr[i].id, stack->arr[i].name, stack->arr[i].salary);
    }
}

// Function to free the dynamically allocated memory for the stack
void freeStack(Stack *stack) {
    free(stack->arr);  // Free the array of employee records
    free(stack);  // Free the stack structure itself
}

// Main function to test the stack operations
int main() {
    int numEmployees;
    int id;
    char name[50];
    float salary;

    // Get the number of employees from the user
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Create a stack with the given number of employees (initial capacity)
    Stack *employeeStack = createStack(numEmployees);

    // Get employee details from the user and push them onto the stack
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for employee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &id);

        printf("Enter Name: ");
        getchar();  // To consume the newline character left by previous input
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';  // Remove the trailing newline character

        printf("Enter Salary: ");
        scanf("%f", &salary);

        // Push the employee record onto the stack
        push(employeeStack, id, name, salary);
    }

    // Display the stack contents
    display(employeeStack);

    // Ask user if they want to pop an employee
    char choice;
    printf("\nDo you want to pop an employee record? (y/n): ");
    getchar();  // To consume any leftover newline character
    scanf("%c", &choice);

    if (choice == 'y' || choice == 'Y') {
        Employee poppedEmployee = pop(employeeStack);
        if (poppedEmployee.id != 0) {  // Check if a valid employee was popped
            printf("\nPopped Employee: ID: %d, Name: %s, Salary: %.2f\n", poppedEmployee.id, poppedEmployee.name, poppedEmployee.salary);
        }
    }

    // Display the stack after popping one record
    display(employeeStack);

    // Free dynamically allocated memory for the stack
    freeStack(employeeStack);

    return 0;
}


