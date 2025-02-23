#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int printed[256] = {0};      
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; i < strlen(str); i++) {
        if (printed[(unsigned char)str[i]] || str[i] == '\n')             continue;

        int count = 0;
        for (int j = 0; j < strlen(str); j++) {
            if (str[i] == str[j])
                count++;
        }

        printf("%c: %d\n", str[i], count);
        printed[(unsigned char)str[i]] = 1;    }
    
    return 0;
}
