#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NAME_LEN 100
#define MAX_ADDRESS_LEN 200
#define MAX_CONTACT_LEN 15
#define ACCOUNT_FILE "accounts.dat"


struct Customer {
    char name[MAX_NAME_LEN];
    char address[MAX_ADDRESS_LEN];
    char contact_number[MAX_CONTACT_LEN];
    float initial_deposit;
    char account_number[9]; // 8-digit account number + NULL terminator
};


void generate_account_number(char *account_number) {
    srand(time(0)); // Seed for randomness
    snprintf(account_number, 9, "%08d", rand() % 100000000); // Generate 8 digits
}


void write_to_file(struct Customer customer) {
    FILE *file = fopen(ACCOUNT_FILE, "a");
    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        exit(1);
    }

   
    fprintf(file, "%s,%s,%s,%.2f,%s\n", customer.name, customer.address, customer.contact_number, customer.initial_deposit, customer.account_number);

    fclose(file);
}

void create_account() {
    struct Customer new_customer;

    printf("Enter customer details to create a new account:\n");
    
    printf("Full Name: ");
    fgets(new_customer.name, MAX_NAME_LEN, stdin);
    new_customer.name[strcspn(new_customer.name, "\n")] = 0; 

    printf("Address: ");
    fgets(new_customer.address, MAX_ADDRESS_LEN, stdin);
    new_customer.address[strcspn(new_customer.address, "\n")] = 0; 

    printf("Contact Number: ");
    fgets(new_customer.contact_number, MAX_CONTACT_LEN, stdin);
    new_customer.contact_number[strcspn(new_customer.contact_number, "\n")] = 0; 

    printf("Initial Deposit: ");
    if (scanf("%f", &new_customer.initial_deposit) != 1 || new_customer.initial_deposit <= 0) {
        printf("Invalid deposit amount. It must be a positive number.\n");
        return;
    }
    getchar(); 

   
    generate_account_number(new_customer.account_number);

    
    write_to_file(new_customer);

    printf("\nAccount successfully created!\n");
    printf("Account Number: %s\n", new_customer.account_number);
    printf("Full Name: %s\n", new_customer.name);
    printf("Address: %s\n", new_customer.address);
    printf("Contact Number: %s\n", new_customer.contact_number);
    printf("Initial Deposit: %.2f\n", new_customer.initial_deposit);
}


void view_account_details() {
    char account_number[9];
    struct Customer customer;
    int found = 0;

    printf("Enter account number to view details: ");
    fgets(account_number, 9, stdin);
    account_number[strcspn(account_number, "\n")] = 0;

    FILE *file = fopen(ACCOUNT_FILE, "r");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        exit(1);
    }

    
    while (fscanf(file, "%99[^,],%199[^,],%14[^,],%f,%8s\n", customer.name, customer.address, customer.contact_number, &customer.initial_deposit, customer.account_number) == 5) {
        if (strcmp(account_number, customer.account_number) == 0) {
            printf("\nAccount Found!\n");
            printf("Account Number: %s\n", customer.account_number);
            printf("Full Name: %s\n", customer.name);
            printf("Address: %s\n", customer.address);
            printf("Contact Number: %s\n", customer.contact_number);
            printf("Initial Deposit: %.2f\n", customer.initial_deposit);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account number %s not found.\n", account_number);
    }

    fclose(file);
}
int main() {
    int choice;

    while (1) {
        
        printf("\nBank Account System\n");
        printf("1. Create New Account\n");
        printf("2. View Account Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            getchar(); 
            continue;
        }
        getchar(); 

        switch (choice) {
            case 1:
                create_account(); 
                break;
            case 2:
                view_account_details(); 
                break;
            case 3:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}


