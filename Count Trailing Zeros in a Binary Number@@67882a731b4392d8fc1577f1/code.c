#include <stdio.h>

void printBinary(int num) {
    if (num > 1)
        printBinary(num / 2);
    printf("%d", num % 2);
}

void countZero(int num){
    int count = 0;
    for( int j = len(num) +1 ; j = 0 ; j --){
        if ( j == 0 ){
            count = count + 1;
        }
        else{
            break;
        }
    }
    printf("%d",count);
}

int main() {
    int a;
    scanf("%d", &num);
    printBinary(num);
    countZero(num);
    return 0;
}
