#include <stdio.h>

#define MAX 100

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void addEmployee(struct Employee e[], int *n)
{
    printf("Enter Employee ID: ");
    scanf("%d", &e[*n].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e[*n].name);

    printf("Enter Salary: ");
    scanf("%f", &e[*n].salary);

    (*n)++;

    printf("Employee Added Successfully!\n");
}

void displayEmployees(struct Employee e[], int n)
{
    int i;

    if (n == 0)
    {
        printf("No Employee Records!\n");
        return;
    }

    printf("\nEmployee Details\n");

    for (i = 0; i < n; i++)
    {
        printf("\nID     : %d", e[i].id);
        printf("\nName   : %s", e[i].name);
        printf("\nSalary : %.2f\n", e[i].salary);
    }
}

int main()
{
    struct Employee e[MAX];
    int n = 0, choice;

    do
    {
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee(e, &n);
            break;

        case 2:
            displayEmployees(e, n);
            break;

        case 3:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}