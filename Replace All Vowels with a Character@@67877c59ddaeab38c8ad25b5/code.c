#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char chr[2]''
    scanf("%99s %s", str, chr);
    char vowel = "AEIOUaeiou";
    for ( int i = 0 ; i < strlen(str) ;i++){
        for( int j = 0 ; j < strlen(vowel)){
            if( str[i] ==vowel[j]){
                str[i] = chr;
            }
        }
    }
    printf("%s",str);
    return 0;
}