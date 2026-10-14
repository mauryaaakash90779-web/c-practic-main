#include <stdio.h>

int main() {
    double num1, num2, result;
    char opr;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &opr);//

   

    switch (opr) {

        case '+':
            result = num1 + num2;
            printf("Result = %.2lf", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Division by zero is not allowed.");
            } else {
                result = num1 / num2;
                printf("Result = %.2lf", result);
            }
            break;

        case '%':
            if ((int)num2 == 0) {
                printf("Modulo by zero is not allowed.");
            } else {
                printf("Result = %d", (int)num1 % (int)num2);
            }
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}