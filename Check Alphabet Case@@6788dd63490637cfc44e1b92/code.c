#include <stdio.h>

int main() {
    char str;
    scanf("%c", &str);
    if (str >= 'A' && str <= 'Z') {
        printf("Uppercase");
    } 
    else (str >= 'a' && str <= 'z') {
        printf("Lowercase");
    } 
    return 0;
}
