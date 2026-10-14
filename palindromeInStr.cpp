#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "madam";
    char reverse[100];

    int length = strlen(str);
    int j = 0;

    for(int i = length - 1; i >= 0; i--) {

        reverse[j] = str[i];
        j++;
    }

    reverse[j] = '\0';

    if(strcmp(str, reverse) == 0) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }

    return 0;
}