#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    int arr[a];
    for( int i = 0; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for( int i = 0 ; i < b ; i++){
        for ( int j = 0 ; j < a ; j++){
            if( j == a){
                arr[0] = arr[a]; 
            }else{
                arr[i+i] = arr[i]; 
            }
        }
    }
    for( int i = 0 ; i < a ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}