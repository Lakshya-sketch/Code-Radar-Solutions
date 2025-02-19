#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   for( int i = 0 ; i < a ;i++){
    for( int j = 0 ; j < a ; j++){
        int alphabet = 65;
        printf("%c",alphabet);
        alphabet++;
    }
    printf("\n")
   }
    return 0;
}