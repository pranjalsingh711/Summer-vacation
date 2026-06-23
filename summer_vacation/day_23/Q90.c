#include <stdio.h>

int main() {

    char str[1000];
    int freq[256] = {0};


    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        if (freq[(unsigned char)str[i]] == 1) {

            printf("First repeating character: %c\n", str[i]);
            
            return 0;
        }
        freq[(unsigned char)str[i]]++;
    }

    printf("No repeating character found.\n");

    return 0;
}