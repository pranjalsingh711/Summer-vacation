#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    
    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

   
    
    long long originalNum = num;

    
    
    do {
        count++;
        num /= 10;
    } while (num != 0);

    
    
    printf("The number %lld has %d digits.\n", originalNum, count);

    return 0;
}
