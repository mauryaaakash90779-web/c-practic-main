#include<stdio.h>
int main(){
  int n,sum=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  if(n<=0){
    printf("Perfect number is defined for positive integers.");
    return 0;
  }
  for(int i=1;i<n;i++){
    if(n%i==0){
      sum += i;
    }
  }
  if(sum == n){
    printf("%d is a perfect number.", n);
  } else {
    printf("%d is not a perfect number.", n);
  }
  return 0;
}