#include <stdio.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void addStudent(struct Student s[], int *n)
{
    printf("Enter Roll No: ");
    scanf("%d", &s[*n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[*n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[*n].marks);

    (*n)++;
    printf("Student Added Successfully!\n");
}

void displayStudents(struct Student s[], int n)
{
    int i;

    if (n == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\nStudent Records\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

int main()
{
    struct Student s[MAX];
    int n = 0, choice;

    do
    {
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(s, &n);
            break;

        case 2:
            displayStudents(s, n);
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