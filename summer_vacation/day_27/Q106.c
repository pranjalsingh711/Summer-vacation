#include <stdio.h>

struct Employee
{
    int id;

    char name[50];

    float salary;
};

int main()
{
    struct Employee e[100];
    
    int n, i, id;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Records\n");

    for(i = 0; i < n; i++)
    {
        printf("ID: %d Name: %s Salary: %.2f\n",
               e[i].id, e[i].name, e[i].salary);
    }

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(e[i].id == id)
        {
            printf("\nEmployee Found\n");
            printf("ID: %d\n", e[i].id);
            printf("Name: %s\n", e[i].name);
            printf("Salary: %.2f\n", e[i].salary);
            return 0;
        }
    }

    printf("Employee not found.");

    return 0;
}