#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);

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
    qsort(arr, a, sizeof(int), compare);
    int minDiff = INT_MAX, num1, num2;
    for (int i = 0; i < a - 1; i++) {
        int difference = abs(arr[i + 1] - arr[i]);
        if (difference < minDiff) {
            minDiff = difference;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    printf("%d %d", num1, num2);
    return 0;
}
