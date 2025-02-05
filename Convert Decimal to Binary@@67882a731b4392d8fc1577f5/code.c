#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int ans,rem;
    while( a > 0){
        rem = a%2;
        ans = (ans * 10) + rem;
        a = a / 2;
    }
    printf("%d",&ans);
    return 0;
}