#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee *emp[MAX_EMPLOYEES];
int count = 0;

void addEmployee() {
    if (count >= MAX_EMPLOYEES) {
        printf("Employee list is full!\n\n");
        return;
    }

    struct Employee *e = malloc(sizeof(struct Employee));

    if (e == NULL) {
        printf("Memory allocation failed!\n\n");
        return;
    }

    printf("Enter ID: ");
    scanf("%d", &e->id);

    printf("Enter Name: ");
    scanf(" %49[^\n]", e->name);

    printf("Enter Salary: ");
    scanf("%f", &e->salary);

    emp[count] = e;
    count++;

    printf("Employee added!\n\n");
}

void displayEmployee() {
    if (count == 0) {
        printf("No Employees to show.\n\n");
        return;
    }

    printf("\nID\tName\t\tSalary\n");
    printf("--------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s\t%.2f\n",
               emp[i]->id,
               emp[i]->name,
               emp[i]->salary);
    }

    printf("\n");
}

void searchEmployee() {
    int id;

    printf("Enter ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i]->id == id) {
            printf("\nEmployee Found!\n");
            printf("Name: %s\n", emp[i]->name);
            printf("Salary: %.2f\n\n", emp[i]->salary);
            return;
        }
    }

    printf("Employee Not Found.\n\n");
}

void deleteEmployee() {
    int id;

    printf("Enter ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i]->id == id) {
            free(emp[i]);

            emp[i] = emp[count - 1];
            emp[count - 1] = NULL;
            count--;

            printf("Employee deleted.\n\n");
            return;
        }
    }

    printf("Employee Not Found.\n\n");
}

void freeAll() {
    for (int i = 0; i < count; i++) {
        free(emp[i]);
        emp[i] = NULL;
    }

    count = 0;
}

int main() {
    int choice;

    do {
        printf("===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");

        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployee();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                deleteEmployee();
                break;

            case 5:
                freeAll();
                printf("BYE!\n");
                break;

            default:
                printf("Invalid choice.\n\n");
        }

    } while (choice != 5);

    return 0;
}
