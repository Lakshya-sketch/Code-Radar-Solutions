#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct pair {
    int differ;
    int a, b;
};

int main() {
    int a;
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    struct pair diff;
    int min = INT_MAX; 

    for (int i = 0; i < a; i++) {
        int next = (i + 1) % a; 
        int difference = abs(arr[next] - arr[i]);

        if (difference < min) {
            min = difference;
            diff.differ = difference;
            diff.a = arr[i];
            diff.b = arr[next];
        }
    }

    printf("%d %d", diff.a, diff.b);
    return 0;
}
