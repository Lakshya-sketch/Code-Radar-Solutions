#include <stdio.h>

void printBinary(int num) {
    if (num > 1)
        printBinary(num / 2);
}

void countZero(int num) {
    int count = 0;
    while (num > 0 && num % 2 == 0) {
        count++;
        num /= 2;
    }
    printf("%d", count);
}

int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
    countZero(num);
    
    return 0;
}
