#include <stdio.h>
int main() {
    int a, n;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    if ( a == 2){
        if ( arr[0] > arr[1]){
            printf("%d",arr[1]);
        }else{
            printf("%d",arr[0]);
        }
    }
    for ( int i = 0 ; i < a ; i++){
        
        else if ((arr[i] > arr[i+1]) && ( arr[i]) > arr[i-1] ){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}