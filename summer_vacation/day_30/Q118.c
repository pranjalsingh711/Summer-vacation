#include <stdio.h>

#define MAX 100

struct Book
{
    int id;
    char title[100];
    char author[50];
};

void addBook(struct Book b[], int *n)
{
    printf("Enter Book ID: ");
    scanf("%d", &b[*n].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b[*n].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[*n].author);

    (*n)++;
    printf("Book Added Successfully!\n");
}

void displayBooks(struct Book b[], int n)
{
    int i;

    if (n == 0)
    {
        printf("No Books Available!\n");
        return;
    }

    printf("\nLibrary Books\n");

    for (i = 0; i < n; i++)
    {
        printf("\nBook ID : %d", b[i].id);
        printf("\nTitle   : %s", b[i].title);
        printf("\nAuthor  : %s\n", b[i].author);
    }
}

int main()
{
    struct Book b[MAX];
    int n = 0, choice;

    do
    {
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook(b, &n);
            break;

        case 2:
            displayBooks(b, n);
            break;

        case 3:
            printf("Good Bye!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}