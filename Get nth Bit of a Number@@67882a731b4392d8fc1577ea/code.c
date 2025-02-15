#include <stdio.h>

int GetBin(int position,int n){
    return ((n & (1>>position)) != 0);
}

int main() {
    int n,position;
    scanf("%d %d", &n, &position);
    printf("%d",GetBin(n,position));
    return 0;
}