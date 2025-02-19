#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        int alpha = 65;
        for( int j = i ; j >= 1  ;j--){
            printf("%c ",alpha);
            a++;
        }
        printf("\n");
    }
    return 0;
}