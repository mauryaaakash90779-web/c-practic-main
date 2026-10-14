#include<stdio.h>
int main(){
  int n, i, largest;
  printf("Enter size of array: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    printf("%d elements of array: ",i+1);
    scanf("%d",&arr[i]);
  }
  largest = arr[0];
  printf("Largest from Array is:\n");
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      largest = arr[i];
    }
  }
  printf("%d ",largest);
}