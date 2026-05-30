#include <stdio.h>

int main() {
    int n, sum = 0;

    // Requesting input from the user
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    // Using a for loop to calculate the total sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Displaying the final calculation
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
