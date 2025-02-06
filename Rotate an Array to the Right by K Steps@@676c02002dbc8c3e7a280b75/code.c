#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    int rotated[n];
    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }
    for (int i = 0; i < n - k; i++) {
        rotated[k + i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    rotateArray(arr, n, k);

    return 0;
}
