#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if ( a > 0){
        printf("Positive");
    }
    else if( a == 0){
        printf("0");
    }
    else{
        printf("Negetive");
    }
    return 0;
}