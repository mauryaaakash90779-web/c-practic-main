#include <stdio.h>

int main() {
    int n, i, j;
    int isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers between 1 and %d.", n);
        return 0;
    }

    printf("Prime numbers are:\n");

    for (i = 2; i <= n; i++) {

        isPrime = 1;

        for (j = 2; j < i; j++) {

            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}