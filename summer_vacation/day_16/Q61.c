#include <stdio.h>

int main() {
    
    int n, sum = 0, expectedSum;

    printf("Enter value of n: ");

    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);

    for(int i = 0; i < n - 1; i++) {

        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("Missing number = %d\n", expectedSum - sum);

    return 0;
}