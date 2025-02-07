#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for( int i = 0 ; i < a ; i ++){
        if( (arr[i] % 2) == 0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}