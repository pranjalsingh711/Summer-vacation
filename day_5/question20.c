#include <stdio.h>

int main() {
    long long n, largestFactor = -1;

    printf("Enter a number: ");
    scanf("%lld", &n);

    // Divide by 2 until n becomes odd
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    // Check odd factors
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2)
        largestFactor = n;

    printf("Largest Prime Factor = %lld\n", largestFactor);

    return 0;
}