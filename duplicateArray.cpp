//wap to scheck duplicate element in a array.
#include<stdio.h>
main(){
	int n,i,d=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the Elements: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		if(arr[i]==arr[j]){
			d=1;
			break;
		}
	}
	if(d==1){
		printf("Duplicate Element Found.");
	}
	else{
		printf("Duplicate Element not Found.");
	}
	
	
}



// #include <stdio.h>

// int main() {

//     int n;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     if (n <= 0) {
//         printf("Array size must be positive.");
//         return 0;
//     }

//     int arr[n];

//     printf("Enter elements:\n");

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Duplicate elements: ");

//     for (int i = 0; i < n; i++) {

//         int isDuplicate = 0;

//         for (int j = 0; j < i; j++) {

//             if (arr[i] == arr[j]) {
//                 isDuplicate = 1;
//                 break;
//             }
//         }

//         if (isDuplicate) {
//             continue;
//         }

//         for (int j = i + 1; j < n; j++) {

//             if (arr[i] == arr[j]) {
//                 printf("%d ", arr[i]);
//                 break;
//             }
//         }
//     }

//     return 0;
// }