#include <stdio.h>

int main() {
    int a;
    int arr[a];
    scanf("%d",&a);    
    for ( int i = 0 ; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int sum1 = 0;
    int sum2 = 0;
    int Big = arr[0];
    int Small = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > Big) {
            Big = arr[i];
        }
        if (arr[i] < Small) {
            Small = arr[i];
        }
    }

    for ( int i = 0 ; i < a ; i ++ ){
        sum1 = sum1 + arr[i];
    }
    for ( int i = Small ; i < big ;i ++){
        sum2 = sum2 + i;
    }

    printf("%d", sum2 - sum1);
    return 0;
}