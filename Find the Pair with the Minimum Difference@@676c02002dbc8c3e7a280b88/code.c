#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int min = 9999;
    int x,y,diff;

    for( int i = 0 ; i < a ;i++){
        for( int j = 0 ; j < a ;j++){
            diff = arr[i] - arr[j];
            x = i;
            y = j;
            if( diff < min){
                min = diff;
            }
        }
    }
    printf("%d %d",arr[x],arr[y]);

    return 0;
}