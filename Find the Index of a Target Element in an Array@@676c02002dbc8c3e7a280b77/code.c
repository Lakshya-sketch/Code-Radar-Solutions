#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    int arr[a];
    int flag = 0;
    for( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for ( int i = 0 ; i < a ; i++){
        if (arr[i] == b){
            flag = 1;
            printf("%d",i);
            break;
        }
    if (!(flag)){
        printf("-1");
    }
    }
    return 0;
}