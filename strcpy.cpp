#include<stdio.h>
#include<string.h>
int main(){
  char str1[50]="Akash";
  char str2[50];
  strcpy(str2,str1);
  printf("Copied string is: %s",str2);
  return 0;
}