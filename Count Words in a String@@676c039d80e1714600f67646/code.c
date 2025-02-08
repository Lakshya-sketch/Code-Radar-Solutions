#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); 
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' '){
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
