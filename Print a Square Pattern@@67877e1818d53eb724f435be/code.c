#include <stdio.h>



int main() {
    int a;
    scanf("%d" , &a);
    for( int i = 0 ; i <= a - 1  ; i++){
        for( int j = 0 ; j < a  ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}