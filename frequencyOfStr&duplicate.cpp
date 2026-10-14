#include <stdio.h>

int main() {

    char str[] = "programming";
    int visited[100] = {0};

    for(int i = 0; str[i] != '\0'; i++) {

        if(visited[i] == 1) {
            continue;
        }

        int count = 0;

        for(int j = 0; str[j] != '\0'; j++) {

            if(str[i] == str[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}


#include <stdio.h>

int main() {

    char str[] = "programming";

    for(int i = 0; str[i] != '\0'; i++) {

        int count = 0;

        for(int j = 0; str[j] != '\0'; j++) {

            if(str[i] == str[j]) {
                count++;
            }
        }

        if(count > 1) {
            printf("%c = %d times\n", str[i], count);
        }
    }

    return 0;
}