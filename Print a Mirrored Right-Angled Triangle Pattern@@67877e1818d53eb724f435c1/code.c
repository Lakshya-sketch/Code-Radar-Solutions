#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for ( int i = 1; i <= a ; i++){
        for( int j = 0 ; j <= a - i;j++){
            printf(" ");
        } 
        for( int j = a ; j = a - i ; j--){
            printf("*")
        }   
    printf("\n");    
    }  
    return 0;
}