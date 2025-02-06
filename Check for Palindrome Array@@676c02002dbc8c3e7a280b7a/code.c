#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for ( int i = 0,j = n ; i < a, j > 0 ; i ++,j--){
        if( arr[i] == arr[j]){
            flag = 0;
        }else{
            flag = 1;
        }    
    }
    if(flag){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}