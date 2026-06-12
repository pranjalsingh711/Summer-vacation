#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, remainder, digits;
    double sum;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;
        sum = 0;

        // Count digits
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;

        // Calculate Armstrong sum
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if ((int)sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}