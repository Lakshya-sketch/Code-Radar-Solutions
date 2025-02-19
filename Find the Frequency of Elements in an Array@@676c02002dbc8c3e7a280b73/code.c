#include <stdio.h>

int main() {
    int n, digit, count = 0;
    scanf("%d %d", &n ,&digit);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    for (int i = 0 ; i < n ; i++){
        target = arr[i];
        count = 0;
        for ( int j = i ; j < n ; j++){
            if ( target == arr[j]){
                count ++;
            }
        }
        printf("%d %d\n",i,count);
    }
    
    return 0;
}
