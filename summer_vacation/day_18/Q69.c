#include <stdio.h>

int main() {
    int n, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}