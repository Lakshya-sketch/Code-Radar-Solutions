#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct pair {
    int a, b;
};

int main() {
    int a;
    scanf("%d", &a);

    if (a < 2) {
        printf("-1");
        return 0;
    }

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
            diff.a = arr[i];
            diff.b = arr[next];
        }
    }
    if (diff.a > diff.b) {
        int temp = diff.a;
        diff.a = diff.b;
        diff.b = temp;
    }

    printf("%d %d", diff.a, diff.b);
    return 0;
}
