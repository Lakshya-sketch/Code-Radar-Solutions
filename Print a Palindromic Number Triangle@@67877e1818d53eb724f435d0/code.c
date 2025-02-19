#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i--){
        int a = 1
        for( int j = 1 ; j <= i%2  ;j++){
            printf("%d ",a);
            a = a + 1;
        }
        for( int j = i%2 + 1 ; j >= 0 ; j--){
            printf("%d ",a);
            a = a - 1;
        }
        printf("\n");
    }
    return 0;
}