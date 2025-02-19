#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int minDiff = INT_MAX; 
    int x, y;
    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            int diff = abs(arr[i] - arr[j]); 
                if (diff < minDiff) { 
                minDiff = diff;
                x = arr[i];
                y = arr[j];
            }
        }
    }

    printf("%d %d\n", y, x);

    return 0;
}
