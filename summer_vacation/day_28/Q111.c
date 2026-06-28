#include <stdio.h>

struct Ticket {
    int ticketNo;
    char passenger[50];
    char destination[50];
};

int main() {
    struct Ticket t1 = {1001, "Pranjal Singh", "Delhi"};

    printf("Ticket No: %d\n", t1.ticketNo);

    printf("Passenger: %s\n", t1.passenger);
    
    printf("Destination: %s\n", t1.destination);
    return 0;
}
