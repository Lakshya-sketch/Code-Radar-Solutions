#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int msb = 0;
    while (a > 0) {
        msb = a; 
        a >>= 1;  
    }
    if ( msb == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}