#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%99s", str);
    int  count = 0;
    for( int i = 0 ; i < strlen(str) - 1 ; i++){
        if( str[i] == " "){
            count ++;
        }
    }
    printf("%d",count - 1);
    return 0;
    }
