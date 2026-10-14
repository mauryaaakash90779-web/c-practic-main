//simple intrest and total amount
#include <stdio.h>

int main() {
    float p, r, t, si, amount;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    amount = p + si;

    printf("Simple Interest = %.2f\n", si);
    printf("Total Amount = %.2f", amount);

    return 0;
}