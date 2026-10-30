#include <stdio.h>

int main() {
    float p, r, t, si, total;

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time in Years: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    total = p + si;

    printf("\n----- Loan Details -----\n");
    printf("Principal Amount: %.2f\n", p);
    printf("Simple Interest: %.2f\n", si);
    printf("Total Amount: %.2f\n", total);

    return 0;
}
