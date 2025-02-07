#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for ( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int i = 0;
    for ( int i = 0 ; i < a ; i++){
        for ( int j = ; j < a; j++){
            if( arr[i] == arr[j]){
                count++;
            }
        }
        if ( count > 1){
            printf("%d",count);
        }
    }
    return 0;
}