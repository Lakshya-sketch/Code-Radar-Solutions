#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =  1 ; i < n ; i++){
        for(int j = 0 ; j < i ; j = j + 2){
            printf("0 ");
        }
        for(int j = 0 ; j < i ; j = j + 1){
            printf("1 ");
        }        
        printf("\n");
    }
    return 0;
}