#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   for ( int i = 0 ; i <= a ; i ++){
    for ( char chr  = 'A' ; chr < 'A' + i; chr ++){
        printf("%c ",chr );
    }
    printf("\n");
   }
    return 0;
}