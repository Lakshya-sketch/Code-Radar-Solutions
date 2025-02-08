#include <stdio.h>
int main() {
    const char str[100];
    scanf("%s",str);
    for( int i = len(str) ; i >= 0 ; i--){
        if( str[i] == 0) continue;
        printf("%c",str[i]);
    }
    return 0;
}
