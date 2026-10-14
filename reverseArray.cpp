#include<stdio.h>
int main(){
  int n, rev=0, i;
  printf("Enter size of array: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    printf("%d elements of array: ",i+1);
    scanf("%d",&arr[i]);
  }
  printf("reverse of Array is:\n");
  for(int i=n-1;i>=0;i--){
    printf("%d ", arr[i]);
  }
}