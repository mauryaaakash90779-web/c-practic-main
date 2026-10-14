//hcf using euclid's algorithm
#include <stdio.h>

int main() {
    int a, b, rem;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) {
        a = -a;
    }

    if (b < 0) {
        b = -b;
    }

    if (a == 0 && b == 0) {
        printf("HCF is not defined.");
        return 0;
    }

    while (b != 0) {
        rem = a % b;
        a = b;
        b = rem;
    }

    printf("HCF = %d", a);

    return 0;
}

// LCM = (a × b) / HCF