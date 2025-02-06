#include <stdio.h>

int main() {
    int a,b;
    int arr[a];
    scanf("%d",&a);
    for( int i = 0 ; i < 0 ; i++){
        dcanf("%d",arr[i]);
    }
    scanf("%d",&b);
    for ( int i = 0 ; i < a ; i++){
        if (arr[i] == b){
            printf("%d",arr[i]);
        }else{
            printf("-1");
        }
    }
    return 0;
}