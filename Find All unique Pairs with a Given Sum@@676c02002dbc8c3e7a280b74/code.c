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
    int sum;
    for ( int i = 0 ; i < a ; i ++){
        for ( int j = i + 1 ; j < a ; j++){
            sum = arr[i] + arr[j];
            if( sum == target ){
                printf("%d %d\n", arr[i] , arr[j]);
            }
        }
        break;
    }
    return 0;
}