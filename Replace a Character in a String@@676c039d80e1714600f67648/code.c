#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char w1, w2;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &w1); 
    scanf(" %c", &w2);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == w1) {
            str[i] = w2;
        }
    }
    puts(str);
    return 0;
}
