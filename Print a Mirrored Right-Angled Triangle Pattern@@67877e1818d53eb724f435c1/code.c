#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for ( int i = 1; i <= a ; i++){
        for( int j = 1;j <= a ; j++){
            if ( (j == a) || (i == a) || ( (i - 1) == (j - 1))){
                printf("*");
            }
            else{
                printf(" ");
            };
        }
    printf("\n");    
    }  
    return 0;
}