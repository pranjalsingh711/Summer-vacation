#include <stdio.h>

int main() {
    
    int n1, n2;

    scanf("%d", &n1);

    int a[n1];

    for(int i = 0; i < n1; i++)

        scanf("%d", &a[i]);

    scanf("%d", &n2);

    int b[n2];

    for(int i = 0; i < n2; i++)

        scanf("%d", &b[i]);

    int unionArr[n1 + n2];

    int k = 0;

    for(int i = 0; i < n1; i++)

        unionArr[k++] = a[i];

    for(int i = 0; i < n2; i++) {

        int found = 0;

        for(int j = 0; j < k; j++) {
            if(b[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }

        if(!found)
            unionArr[k++] = b[i];
    }

    printf("Union Array:\n");

    for(int i = 0; i < k; i++)
        printf("%d ", unionArr[i]);

    return 0;
}