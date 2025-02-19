#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   for( int i = 0 ; i < a ;i++){
    int alpha = 65;
    for( int j = 0 ; j < i+1 ; j++){
        printf("%c ",alpha);
        alpha++;
    }
    printf("\n");
   }
    return 0;
}