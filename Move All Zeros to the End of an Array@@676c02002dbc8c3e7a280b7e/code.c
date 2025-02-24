#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int temp_arr[n];
    for( int i = 0 ; i < n ;i++){
        temp_arr[i] = 0;
    }
    for( int i = 0 ; i < n ; i++){
        if( arr[i] != 0){
            temp_arr[0] = arr[i];
        }
    }

    int final_arr[n],i = 0;
    while(temp_arr[i] != 0){
        final_arr[i] = temp_arr[i];
        i++;
    }

    for( int i = sizeof(temp_arr); i <= n; i++ ){
        final_arr[i] = 0;
    }
    

    for (int i = 0; i < n; i++) {
        printf("%d ", final_arr[i]);
    }

    return 0;
}
