#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char names[50][100], temp[100];

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    printf("Enter names:\n");
    for(int i = 0; i < n; i++)

        fgets(names[i], sizeof(names[i]), stdin);

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {

                strcpy(temp, names[i]);

                strcpy(names[i], names[j]);

                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");
    for(int i = 0; i < n; i++)
    
        printf("%s", names[i]);

    return 0;
}