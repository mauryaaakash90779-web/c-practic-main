#include<stdio.h>
int main(){
  int n,m;
  printf("Enter the row of array: ");
  scanf("%d",&n);
  printf("Enter the column of array: ");
  scanf("%d",&m);
  int arr1[n][m],arr2[n][m],arr3[n][m];
  printf("Enter the elements of first array: ");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&arr1[i][j]);
    }
  }
  printf("Enter the elements of second array: ");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&arr2[i][j]);
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      arr3[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
  printf("Sum of elements of array is: \n");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%d ",arr3[i][j]);
    }
    printf("\n");
  }
  return 0;
}