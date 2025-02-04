#include <stdio.h>



int main() {
    int a;
    scanf("%d" , &a);
    for( int i = 0 ; i < a ; i++){
        if( ( i % 2 == 0))
            for( int j = 0 ; j <= a ; j++){
                printf("*");
            }
        else{
            printf("#");
        }
        printf("\n");
    }
    return 0;
}