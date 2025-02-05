#include <stdio.h>
int main() {
    int a,ans;
    scanf("%d",&a);
    ans = a & 1;
    printf("%d",ans);
    if ( ans == 1 ){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}