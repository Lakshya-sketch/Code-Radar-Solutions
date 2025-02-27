#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int isVowel(char ch) { 
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (!isVowel(str[i])) {
            str[i] = \0; 
        }
    }

    printf("%s", str);
    return 0;
}
