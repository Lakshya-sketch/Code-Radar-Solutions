#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   int alphabet = 65;
   for( int i = 0 ; i < a ;i++){
    for( int j = 0 ; j < i+! ; j++){
        printf("%c ",alphabet);
        alphabet = alphabet + 1;
    }
    printf("\n");
   }
    return 0;
}