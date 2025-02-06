#include <stdio.h>

int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    int arr[a];
    for( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int e_count,o_count;
    for( int i = 0; i < a ; i++){
        if( (arr[i] % 2) == 0){
            e_count = e_count + 1;
        }
        else if( !(arr[i] % @) == 0){
            o_count = o_count + 1;
        }
        }
    }
    printf("%d %d",e_count,o_count);
    return 0;
}