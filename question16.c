#include <stdio.h>
#include <math.h>   


int countDigits(int num) {
    if (num == 0) return 1; 
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int num) {
    if (num < 0) return 0; 
    int digits = countDigits(num);
    int sum = 0, temp = num;
    while (temp != 0) {
        int rem = temp % 10;
        sum += (int)pow(rem, digits);
        temp /= 10;
    }
    return (sum == num);
}

int main() {
    int low, high;

    // Input range
    printf("Enter two integers (range): ");
    if (scanf("%d %d", &low, &high) != 2) {
        printf("Invalid input. Please enter integers only.\n");
        return 1;
    }

    // Swap if low > high
    if (low > high) {
        int temp = low;
        low = high;
        high = temp;
    }

    printf("Armstrong numbers between %d and %d are:\n", low, high);

    // Iterate through the range
    for (int i = low; i <= high; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
