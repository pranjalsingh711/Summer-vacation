#include <stdio.h>
#include <string.h>

int main() {

    int n;

    char words[50][100], temp[100];

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words:\n");

    for(int i = 0; i < n; i++)
        scanf("%s", words[i]);

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words Sorted by Length:\n");
    
    for(int i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}