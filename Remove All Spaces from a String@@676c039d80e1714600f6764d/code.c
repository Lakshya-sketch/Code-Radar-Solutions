#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char space[2] = " ";
    char blank[2] = "";
    fgets(str, sizeof(str), stdin);
    for( int i = 0 ; i < strlen(str);i++){
        if( str[i] == space[0] ){
            str[i] = blank[0];
        }
    }
    printf("%s",str);

    return 0;
}