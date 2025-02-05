#include <stdio.h>
int main() {
    if( a == 0){
        printf("Set");
        break;
    }
    int a;
    scanf("%d",&a);
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