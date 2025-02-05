#include <stdio.h>

int main() {
    int a, b;
    char str;
    scanf("%d %d %c", &a, &b, &str);
    if (str == '+') {
        printf("%d", a + b);
    }
    else if (str == '-') {
        printf("%d", a - b);
    }
    else if (str == '*') {
        printf("%d", a * b);
    }
    else{
        printf("%d", a / b);
    }
    
    return 0;
}
