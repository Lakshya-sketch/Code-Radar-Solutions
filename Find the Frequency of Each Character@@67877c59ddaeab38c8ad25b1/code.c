#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for( int i = 0 ; i < strlen(str) ; i++){
        int count = 0;
        for ( int j = 0 ; j < strlen(str) ;j++){
            if(str[i] == str[j])
            count++;
        }
        printf("%c: %d\n",str[i],count);
    }
    return 0;
}