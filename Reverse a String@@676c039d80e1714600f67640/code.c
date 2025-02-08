#include <stdio.h>
int main() {
    const char str[6];
    scanf("%5s",str);
    for( int i = 4 ; i >= 0 ; i--){
        if( str[i] == 0) continue;
        printf("%c",str[i]);
    }
    return 0;
}
