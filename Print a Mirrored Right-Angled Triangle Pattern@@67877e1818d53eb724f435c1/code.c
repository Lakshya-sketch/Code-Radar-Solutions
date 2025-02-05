#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for ( int i = 0; j < a ; i++){
        for( int j = 0;j < a ; j++){
            if ( (j == a-1) || (i == a-1) || (i == j)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");    
    }  
    return 0;
}