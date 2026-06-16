#include <stdio.h>

int main() {
    
    int n;

    printf("Enter size of array: ");

    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)

        scanf("%d", &arr[i]);

    int maxFreq = 0, element;

    for(int i = 0; i < n; i++) {

        int count = 1;

        for(int j = i + 1; j < n; j++) {

            if(arr[i] == arr[j])

                count++;
        }

        if(count > maxFreq) {

            maxFreq = count;

            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);

    printf("Frequency = %d\n", maxFreq);

    return 0;
}