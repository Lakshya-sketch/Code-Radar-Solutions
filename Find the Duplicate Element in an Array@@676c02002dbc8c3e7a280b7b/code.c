#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for ( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    for ( int i = 0 ; i < a ; i++){
        int count = 0;
        for ( int j = 0 ; j < a; j++){
            if( arr[i] == arr[j]){
                count++;
            }
        }
        if ( count > 1){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}