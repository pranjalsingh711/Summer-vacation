#include <stdio.h>
#include <string.h>

int main() {

    char str[200], longest[50], word[50];

    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {

            word[j++] = str[i];

        } else {

            word[j] = '\0';

            if (strlen(word) > maxLen) {

                maxLen = strlen(word);
                
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}