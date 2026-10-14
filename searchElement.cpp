#include <stdio.h>

int main() {

    int n, search;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.");
        return 0;
    }

    int arr[n];

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {

        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is found in the array.", search);
    }
    else {
        printf("%d is not found in the array.", search);
    }

    return 0;
}