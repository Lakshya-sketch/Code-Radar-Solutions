#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 0 ; i <= a ;i++){
        if ( a == 1){
            printf("*");
        }else{

        for( int j = (i % 2) - 1 ;j <= ( i % 2) + 1 ; j++){
            printf("*");
        }}
        printf("\n");
    }
    return 0;
}