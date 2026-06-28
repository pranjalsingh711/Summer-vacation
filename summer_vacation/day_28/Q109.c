#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b1 = {1, "C Programming", "Dennis Ritchie"};

    printf("Book ID: %d\n", b1.id);

    printf("Title: %s\n", b1.title);
    
    printf("Author: %s\n", b1.author);
    return 0;
}
