#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for ( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for ( int i = 0 ; i < n ; i++){
        for( int j = 0 ; j < n;j++){
            if ( arr[i] + arr[j] == target){
                printf("%d %d",i,j);
            }
        }
    }
    return 0;
}