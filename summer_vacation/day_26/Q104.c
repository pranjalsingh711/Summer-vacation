#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Quiz Application\n");

    printf("\n1. What is the capital of India?\n");

    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n3. 2 + 3 = ?\n");
    printf("1. 4\n2. 5\n3. 6\n4. 7\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nYour Score: %d/3\n", score);

    return 0;
}