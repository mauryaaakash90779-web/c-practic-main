#include <stdio.h>

int main() {

    int m, n, p, q;
    int i, j, k;

    printf("Enter the number of rows of first matrix: ");
    scanf("%d", &m);

    printf("Enter the number of columns of first matrix: ");
    scanf("%d", &n);

    printf("Enter the number of rows of second matrix: ");
    scanf("%d", &p);

    printf("Enter the number of columns of second matrix: ");
    scanf("%d", &q);

    // Matrix multiplication possible only when
    // columns of first matrix == rows of second matrix
    if (n != p) {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    int arr1[m][n], arr2[p][q], result[m][q];

    printf("Enter first matrix:\n");

    for (i = 0; i < m; i++) {

        printf("Enter %d row Item of first matrix: ", i + 1);

        for (j = 0; j < n; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for (i = 0; i < p; i++) {

        printf("Enter %d row Item of second matrix: ", i + 1);

        for (j = 0; j < q; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++) {

        for (j = 0; j < q; j++) {
            //we can initialise the result here
            for (k = 0; k < n; k++) {

                result[i][j] =
                    result[i][j] + arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("The multiplication of matrix 1 and 2 is:\n");

    for (i = 0; i < m; i++) {

        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}