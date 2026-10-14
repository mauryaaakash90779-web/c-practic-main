#include<stdio.h>
int main(){
  int n,rem,temp,power,arm=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  temp = n;
  while(n != 0){
    rem = n % 10;
    power = rem * rem * rem;
    arm = arm + power;
    n = n / 10;
  }
  if(temp == arm){
    printf("%d is an Armstrong number.", temp);
  } else {
    printf("%d is not an Armstrong number.", temp);
  }
  return 0;
}