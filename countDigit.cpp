// //count digit
// #include<stdio.h>
// int main(){
//   int n, count = 0;
//   printf("Enter a number: ");
//   scanf("%d",&n);
//   while(n != 0){
//     n = n / 10;
//     count++;
//   }
//   printf("Number of digits: %d", count);
//   return 0;
// }

// //sum of digits
// #include<stdio.h>
// int main(){
//   int n, sum = 0;
//   printf("Enter a number: ");
//   scanf("%d",&n);
//   while(n != 0){
//     sum += n % 10;
//     n = n / 10;
//   }
//   printf("Sum of digits: %d", sum);
//   return 0;
// }

//reverse of digits
#include<stdio.h>
int main(){
  int n, rev=0,rem;
  printf("Enter a number: ");
  scanf("%d",&n);
  while(n != 0){
    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
  }
  printf("Reverse of digits: %d", rev);
  return 0;
}