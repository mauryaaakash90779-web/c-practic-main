#include<stdio.h>
#include<string.h>
int main(){
  char str[] = "Akash";
  char *start = str;
  int len = strlen(str);
  char *end = str + len - 1;
  while(start<end){
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
  printf("Reversed string is: %s\n", str);
  return 0;
}