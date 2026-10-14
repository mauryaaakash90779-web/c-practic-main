#include <stdio.h>

int digitSum(int n) {

    if (n == 0) {
        return 0;
    }

    return (n % 10) + digitSum(n / 10);
}

int main() {

    int result = digitSum(1234);

    printf("Sum = %d", result);

    return 0;
}