#include <stdio.h>

void leftRotate(int arr[], int n, int b) {
    int temp[b];

    for (int i = 0; i < b; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n - b; i++) {
        arr[i] = arr[i + b];
    }

    for (int i = 0; i < b; i++) {
        arr[n - b + i] = temp[i];
    }
}

int main() {
    int n, b;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &b);

    leftRotate(arr, n, b);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
