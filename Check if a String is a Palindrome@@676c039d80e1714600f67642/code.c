#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%99s",str);
    for( int i = 0,j = lenstr(str) ; i < lenstr(str),j > 0 ; i++,j--){
        if (!( str[j] == str[j])){
            printf("No");
        }
        else{
            printf("Yes");
        }
    }
    return 0;
}