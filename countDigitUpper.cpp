#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[100];

    int upper = 0;
    int lower = 0;
    int digit = 0;
    int special = 0;
    int space = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        if (isupper(str[i])) {
            upper++;
        }
        else if (islower(str[i])) {
            lower++;
        }
        else if (isdigit(str[i])) {
            digit++;
        }
        else if (isspace(str[i])) {
            space++;
        }
        else {
            special++;
        }
    }

    printf("Uppercase = %d\n", upper);
    printf("Lowercase = %d\n", lower);
    printf("Digits = %d\n", digit);
    printf("Special Characters = %d\n", special);
    printf("Spaces = %d\n", space);

    printf("Length = %d\n", strlen(str));

    return 0;
}