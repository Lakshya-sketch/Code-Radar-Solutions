#include <stdio.h>

int main() {
    char str;
    scanf("%c", &str);
    if (str >= 'A' && str <= 'Z') {
        printf("Uppercase");
    } 
    else if (str >= 'a' && str <= 'z') {
        printf("Lowercase");
    } 
    else {
        printf("Not an alphabet");
    }

    return 0;
}
