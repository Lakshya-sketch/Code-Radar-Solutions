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
    for ( int i = 0 ; i < a ; i++){
        for( int j = i; j < a;j++){
            if ( arr[i] + arr[j] == target){
                printf("%d %d\n",i,j);
            }
        }
    }
    return 0;
}