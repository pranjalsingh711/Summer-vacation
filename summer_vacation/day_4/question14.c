#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
    } 
    else if (n == 1) {
        printf("1\n");
    } 
    else {
        for (i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth Fibonacci term is: %lld\n", n, second);
    }

    return 0;
}