#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a];
    for( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for( int i = 0 ; i < a ; i ++){
        if( arr[i] > b){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}