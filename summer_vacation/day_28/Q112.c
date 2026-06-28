#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c1 = {"Pranjal Singh", "9876543210"};

    printf("Name: %s\n", c1.name);

    printf("Phone: %s\n", c1.phone);
    
    return 0;
}
