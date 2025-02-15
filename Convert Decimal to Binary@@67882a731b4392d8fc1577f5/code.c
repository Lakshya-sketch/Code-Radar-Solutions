#include <stdio.h>

int DecToBin(int n){
     int bin = 0,rem,power = 1;
     while ( n > 0){
        rem = bin % 2;         
        bin = bin / 2;
        bin = bin + (rem * power);
        power = power * 10;
     }     
     return bin;
 }

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",DecToBin(n));

    return 0;
}