#include <stdio.h>
int SetBin(int position,int n){
    return ( n | ( 1 << position ) );
}
int main() {
    int n,position;
    scanf("%d %d", &n, &position);
    printf("%d",SetBin(position,n));
    return 0;
}