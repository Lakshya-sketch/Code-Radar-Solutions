#include <stdio.h>
#include <string.h>

int main() {
   char str[100],find[2];
   scanf("%99s %s",str,find);
   int count = 0;
   for ( int i = 0 ; i < strlen(str) ; i++ ){
    if (str[i] == find[0]){
        count ++;
    }
   }
   printf("%d",count);
    return 0;
}