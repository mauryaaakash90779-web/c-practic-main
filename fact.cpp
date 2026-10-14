#include<stdio.h>
int main(){
  int n,fact=1;
  printf("Enter a  number: ");
  scanf("%d",&n);
  if(n<0){
    printf("Factorial of negative number doesn't exist.");
    return 0;
  }
  else if(n==0){
    printf("Factorial of 0 is 1");
    return 0;
  }else{
     for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  printf("Factorial of %d is %d", n, fact);
  }
  return 0;
}