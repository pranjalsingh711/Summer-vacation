#include <stdio.h>

int main()
{
    int empId;
    char name[50];
    float basic, hra, da, pf, gross, net;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    pf = basic * 0.08;

    gross = basic + hra + da;
    net = gross - pf;

    printf("\n------ Salary Slip ------\n");
    printf("Employee ID : %d\n", empId);
    printf("Name        : %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA         : %.2f\n", hra);
    printf("DA          : %.2f\n", da);
    printf("PF          : %.2f\n", pf);
    printf("Gross Salary: %.2f\n", gross);
    printf("Net Salary  : %.2f\n", net);

    return 0;
}