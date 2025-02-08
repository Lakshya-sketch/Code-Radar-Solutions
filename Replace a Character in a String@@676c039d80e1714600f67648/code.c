#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char w1[2], w2[2];
    scanf("%99s %1s %1s", str, w1, w2);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == w1[0]) {
            str[i] = w2[0];
        }
    }
    printf("%s", str);

    return 0;
}
