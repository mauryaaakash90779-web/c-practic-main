#include <stdio.h>

int main() {

    // int a = 10;

    // int *p = &a;
    // *p = 20;

    // printf("a = %d\n", a);
    // printf("address of a = %p\n", &a);
    // printf("p = %p\n", p);
    // printf("*p = %d\n", *p);
    char name[] = "Akash";

    char *p = name;
    while(*p!='\0'){
        printf("%c",name);
        p++;
    }

    printf("%c", *p);

    return 0;
}