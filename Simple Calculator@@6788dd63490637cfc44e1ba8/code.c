#include <stdio.h>

int main() {
    char str;
    int a,b;
    scanf("%d %d %c", &a &b &str);
    if ( str == "+"){
        printf("%d", (a + b));
    }
    else if( str == "-"{
        printf("%d", (a - b));
    }
    else if( str == "*"){
        printf("%d", (a * b));
    }
    else{
        printf("%d", (a / b));
    }
    )
    return 0;
}