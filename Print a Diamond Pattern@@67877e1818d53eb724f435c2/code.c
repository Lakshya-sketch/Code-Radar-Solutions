#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for( int i = 0 ; i < a ; i++ ){
        if ( i <= i % 2){
                for( int j = 0 ; j < a ; j++){
                    if ( j == 0 || j == 1 || i == j){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
            }printf("\n");
        
        
    }
    return 0;
}

(1,1) (1,2) @(1,3) (1,4) (1,5)
(2,1) @(2,2) @(2,3) @(2,4) (2,5)
@(3,1) @(3,2) @(3,3) @(3,4) @(3,5)
(4,1) @(4,2) @(4,3) @(4,4) (4,5)
(5,1) (5,2) @(5,3) (5,4) (5,5)