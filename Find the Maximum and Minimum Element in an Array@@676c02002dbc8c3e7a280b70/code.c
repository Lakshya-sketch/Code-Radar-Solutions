#include <stdio.h>

int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    int arr[a];
    for( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int b = 0;
    int c = 9999;
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
    printf("%d %d",c,b);
    return 0;
}