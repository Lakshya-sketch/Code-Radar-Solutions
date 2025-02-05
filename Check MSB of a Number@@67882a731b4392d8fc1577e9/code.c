#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if( a == 0){
        printf("Set");
        break;
    }
    int msb = 0;
    while (a > 0) {
        msb = a; 
        a >>= 1;  
    }
    if ( msb == 1){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}