#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =  1 ; i < n ; i++){
        for(int j = 0 ; j < i ; j = j + 2){
            printf("1 ");
        }
        for(int j = i ; j < i ; j = j + 1){
            printf("0 ");
        }        
        printf("\n");
    }
    return 0;
}