#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for( int i = 0 ; i <= a ; i++ ){
        if ( i < i % 2 ){
                for( int j =  ; j <= a ; j++){
                    if ( j == 0 || j == 1 || i == j){
                        printf(" ");
                    }
                    else{
                        printf("*");
                    }
                }
            }printf("\n"); 
    }
    return 0;
}

