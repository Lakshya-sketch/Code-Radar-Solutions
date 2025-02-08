#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%99s",str);
    for( int i = 0,j = strlen(str) - 1 ; i < strlen(str) &&j > 0 ; i++,j--){
        if (!( str[i] == str[j])){
            printf("Yes");
            return 0;
        }
        
    }
    return("No");
    return 0;
}