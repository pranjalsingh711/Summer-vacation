#include <stdio.h>

int isArmstrong(int n)
{
    int original = n, rem, sum = 0;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");

    scanf("%d", &num);

    if (isArmstrong(num))

        printf("Armstrong Number");

    else
    
        printf("Not an Armstrong Number");

    return 0;
}