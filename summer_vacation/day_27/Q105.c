#include <stdio.h>

struct Student
{
    int roll;

    char name[50];

    float marks;
};

int main()
{
    struct Student s[100];

    int n, i, choice, searchRoll;

    float total = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    do
    {
        printf("\n----- Student Management -----\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by Roll No\n");
        printf("3. Average Marks\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records:\n");
                for(i = 0; i < n; i++)
                {
                    printf("Roll: %d Name: %s Marks: %.2f\n",
                           s[i].roll, s[i].name, s[i].marks);
                }
                break;

            case 2:
                printf("Enter Roll No: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == searchRoll)
                    {
                        printf("Roll: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        break;
                    }
                }

                if(i == n)
                    printf("Student not found.\n");

                break;

            case 3:
                total = 0;
                for(i = 0; i < n; i++)
                    total += s[i].marks;

                printf("Average Marks = %.2f\n", total / n);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}