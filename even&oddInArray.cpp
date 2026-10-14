// #include<stdio.h>
// int main(){
//   int n, i,even=0,odd=0;
//   printf("Enter size of array: ");
//   scanf("%d",&n);
//   int arr[n];
//   for(int i=0;i<n;i++){
//     printf("%d elements of array: ",i+1);
//     scanf("%d",&arr[i]);
//   }
//   printf("Even and Odd numbers in Array are:\n");
//   for(int i=0;i<n;i++){
//     if(arr[i]%2==0){
//       even++;
//     }
//     else{
//       odd++;
//     }
//   }
//   printf("Even numbers: %d\n", even);
//   printf("Odd numbers: %d\n", odd);
// }

#include<stdio.h>
int main(){
  int n, i;
  printf("Enter size of array: ");
  scanf("%d",&n);
  int arr[n];
  int even_arr[n], odd_arr[n];
  int even_idx = 0, odd_idx = 0;
  for(int i=0;i<n;i++){
    printf("%d elements of array: ",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Even and Odd numbers in Array are:\n");
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      even_arr[even_idx++] = arr[i];
    }
    else{
      odd_arr[odd_idx++] = arr[i];
    }
  }
  printf("Even numbers: ");
  for(int i=0;i<even_idx;i++){
    printf("%d ", even_arr[i]);
  }
  printf("\n");
  printf("Odd numbers: ");
  for(int i=0;i<odd_idx;i++){
    printf("%d ", odd_arr[i]);
  }
  printf("\n");
}