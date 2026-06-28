#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a1 = {101, "Pranjal Singh", 5000.0};
    printf("Account No: %d\n", a1.accNo);
    printf("Name: %s\n", a1.name);
    printf("Balance: %.2f\n", a1.balance);
    return 0;
}
