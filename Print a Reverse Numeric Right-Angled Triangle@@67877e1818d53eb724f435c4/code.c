#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if ( a == 1){

        printf("1");
    }
    for ( int i = 1 ; i <= a + 1; i++){
        for( int j = 1 ; j <= a - i + 1 ; j++){
            printf("%d ",j);
        }
        printf("\n");
    } 
    return 0;
}