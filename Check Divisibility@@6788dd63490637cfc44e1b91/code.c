#include <stdio.h>
int main() {
    int a;
    scanf("%d %d",&a,&b);
    if ( (a%5 == 0) && (b%11 == 0)){
        printf("Divisible");
    }
    else{
    printf("Not Divisible");
    }return 0;
}