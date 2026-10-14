#include <stdio.h>

int factorial(int n) {

    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {

    int result = factorial(5);

    printf("%d", result);

    return 0;
}

// #include <stdio.h>

// int sum(int n) {

//     if (n == 0) {
//         return 0;
//     }

//     return n + sum(n - 1);
// }

// int main() {

//     int result = sum(5);

//     printf("Sum = %d", result);

//     return 0;
// }