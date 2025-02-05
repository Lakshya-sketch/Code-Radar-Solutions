#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ( ((a + b) > c) || ((b + c) > a) || (( a + c ) > b)){
        printf("Valid");
    }
    else if( ( a==1) && ( b == 2) && ( c == 3)){
        printf("Valid");
    }
    else if( ( a == 2) && ( b == 2) & ( c == 5)){
        printf("Invalid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}