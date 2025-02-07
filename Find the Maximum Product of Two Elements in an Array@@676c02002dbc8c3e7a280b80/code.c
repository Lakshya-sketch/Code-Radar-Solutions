#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int Largest = 0,product;
    for ( int i = 0 ; i < a ; i ++){
        for( int j = 0 ; j < a -1 ; j++){
            product = (arr[j] * arr[j+1]);
            if ( product > Largest ){
                Largest = product;
            }
        }
    }
    printf("%d",Largest);
    return 0;
}