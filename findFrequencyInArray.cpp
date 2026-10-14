#include <stdio.h>

int main() {

    int n, search;
    int frequency = 0;

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

    printf("Enter number to find frequency: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {

        if (arr[i] == search) {
            frequency++;
        }
    }

    printf("Frequency of %d = %d", search, frequency);

    return 0;
}