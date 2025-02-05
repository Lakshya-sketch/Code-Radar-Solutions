#include <stdio.h>



int main() {
    int a;
    scanf("%d",&a);
    for ( int i = 0; j < a ; i++){
        for( int j = 0;j < a ; j++){
            if ( (j == a) || (i == a) || (i == j)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");    
    }

    
    return 0;
}