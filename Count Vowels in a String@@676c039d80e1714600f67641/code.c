#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%99s", str);
    int count = 0;  
    char string[10] = "aeiouAEIOU";
    for( int i = 0 ; i < strlen(str) - 1 ; i++){
        for ( int j = 0 ; j <= 10 ; j++){
            if( str[i] == string[j] ){
                count++;
            }
        }
    }
    printf("%d",count); 
    return 0;
}