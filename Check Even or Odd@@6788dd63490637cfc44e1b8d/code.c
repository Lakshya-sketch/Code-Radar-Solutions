#include <stdio.h>

int main() {
    int a;
    if ( a >= 0){
    if ( a % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    }
    else{
        a = a * (-1);
        if ( a % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

    }
    return 0;
}