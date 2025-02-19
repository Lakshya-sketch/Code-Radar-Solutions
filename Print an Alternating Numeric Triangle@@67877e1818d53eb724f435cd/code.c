#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int flag = 0;
    for(int i =  1 ; i <= n ; i++){
        for(int j = 0 ; j < i ; j++){
            flag = 0
            if(flag){
                printf("1");
            }
            flag = 1;
            if(flag){
                printf("0");
            }

        }        
        printf("\n");
    }
    return 0;
}