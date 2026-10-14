// #include <stdio.h>

// int main() {

//     int n,j,i;

//     printf("Enter the size: ");
//     scanf("%d", &n);

//     // Upper half
// 	for(i=1;i<=n;i++){
// 		for(j=i;j<=n;j++){
// 			printf(" ");
// 		}
// 		for(j=1;j<=i;j++){
// 			printf("* ");
// 		}
// 		printf("\n");
// 	}	

//     // Lower half
//     for(i=1;i<=n;i++){
// 		for(j=1;j<=i;j++){
// 			printf(" ");
// 		}
// 		for(j=i;j<=n;j++){
// 			printf("* ");
// 		}
// 		printf("\n");
// 	}

//     return 0;
// }



#include <stdio.h>

int main() {

    int n, i, j;

    printf("Enter the size: ");
    scanf("%d", &n);

    // Upper half
    for (i = 1; i <= n; i++) {

        // Spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // Stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {

        // Spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // Stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}





// #include <stdio.h>

// int main() {

//     int n;

//     printf("Enter the size: ");
//     scanf("%d", &n);

//     // Upper half
//     for (int i = 1; i <= n; i++) {

//         // Spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // Stars
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     // Lower half
//     for (int i = n - 1; i >= 1; i--) {

//         // Spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // Stars
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }