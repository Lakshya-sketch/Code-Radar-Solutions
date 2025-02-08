#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char w1[2],w2[2];
    scanf("%99s %s %s",w1,w2);
    for ( int i = 0 ; i < a ; i++ ){
        if ( str[i] == w1 ){
            str[i] = w2;
        }
    }
    printf("%s",str);
    return 0;
}