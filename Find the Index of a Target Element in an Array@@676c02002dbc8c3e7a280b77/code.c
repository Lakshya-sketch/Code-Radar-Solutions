#include <stdio.h>

int main() {
    int a,b;
    
    scanf("%d",&a);
    int arr[a];
    for( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for ( int i = 0 ; i < a ; i++){
        if (arr[i] == b){
            printf("%d",i);
            break;
        }else{
            printf("-1");
            break;
        }
    }
    return 0;
}