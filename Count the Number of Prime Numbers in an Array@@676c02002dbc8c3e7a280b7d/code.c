#include <stdio.h>

int main() {
    int a,count = 0;
    scanf("%d",&a);
    int arr[a];
    for( int i = 0 ; i < a ; i ++){
        scanf("%d",&arr[i]);
    }
    for ( int i = 0 ; i < a ; i++){
    for (int i = 2; i * i <= arr[i]; i++) {
        if (arr[i] % i == 0) 
            count += 1;
    }
    }
    printf("%d",count)
    return 0;
}