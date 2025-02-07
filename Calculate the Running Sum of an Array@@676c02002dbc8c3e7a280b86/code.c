#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for( int i = 0 ; i < a ; i ++){
        scanf("%d",&arr[i]);
    }
    int sum = arr[0];
    for ( int i = 1; i <= a ; i++){
        printf("%d ",sum);
        sum = sum + arr[i];
    }
    return 0;
}