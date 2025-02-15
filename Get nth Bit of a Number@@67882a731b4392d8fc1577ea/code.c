#include <stdio.h>

int GetBin(int position,int n){
    return (n & (1 << position)) ? 1 : 0;
}

int main() {
    int n,position;
    scanf("%d %d", &n, &position);
    printf("%d",GetBin(position,n));
    return 0;
}