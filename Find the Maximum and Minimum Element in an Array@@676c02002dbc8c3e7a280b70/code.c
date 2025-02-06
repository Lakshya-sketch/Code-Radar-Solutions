#include <stdio.h>

int main() {
    int a,n,arr[a];
    scanf("%d %d",&a,&n);
    for( int = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int b = 0;
    int c = 9999999999;
    for( int i = 0 ; i < a ; i++){
        if (arr[i] > b){
            b = arr[i];    
        }
    }
    for( int i = 0; i < a; i++){
        if (arr[i] < c){
            c = arr[i];
        }
    }
    printf("%d",c);
    printf("%d",b);

    return 0;
}