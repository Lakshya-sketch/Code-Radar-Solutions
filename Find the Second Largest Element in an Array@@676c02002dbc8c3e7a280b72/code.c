#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for( int i - 0 ; i < a; i++){
        scanf("%d",&a);
    }
    for( int i = 0 ; i < a ; i ++ ){
        if( arr[i+1] > arr[i]){
            arr[i+1] = arr[i];
        }
    }
    printf("%d",arr[a-2]) ;
    return 0;
}