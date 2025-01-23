#include <stdio.h>
int main() {
    const char str[100];
    scanf("%99s",&str);
    printf("You entered: %s",str);

    return 0;
}