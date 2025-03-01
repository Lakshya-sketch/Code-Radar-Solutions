#include <stdio.h>
#include <string.h>
#include <ctype.h> 
void removeSpaces(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

void toLowerCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]); 
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    toLowerCase(str);
    removeSpaces(str);
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}
