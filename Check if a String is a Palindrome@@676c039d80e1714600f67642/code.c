#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%99s", str);
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n"); 
    return 0;
}
