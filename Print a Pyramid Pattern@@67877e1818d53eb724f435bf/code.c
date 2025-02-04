#include <stdio.h>

char* welcome() {
    int a;
    for(int i = 0 ; i < a ;i++){
        for( int j = (i % 2)+1 ;j <= ( i % 2) + 1 ; j++){
            printf("*")
        }
        printf("\n")
    }
    return
}

int main() {
    printf("%s", welcome());
    return 0;
}