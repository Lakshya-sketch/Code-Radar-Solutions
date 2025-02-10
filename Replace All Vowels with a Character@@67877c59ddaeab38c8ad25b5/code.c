#include <stdio.h>
#include <string.h>

int main() {
    char str[100], chr;
    char vowels[] = "AEIOUaeiou";
    scanf("%99s %c", str, &chr);

    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < strlen(vowels); j++) {
            if (str[i] == vowels[j]) {
                str[i] = chr;
                break;
            }
        }
    }

    printf("%s\n", str);
    return 0;
}
