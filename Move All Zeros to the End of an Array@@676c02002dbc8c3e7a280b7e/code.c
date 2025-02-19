#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 2; i++) {
        if (arr[i] == 0) {
            if (arr[i + 1] == 0) {
                int temp = arr[i];
                arr[i] = arr[i + 2];
                arr[i + 2] = temp;
            } else {
                if (i + 2 < n) {
                    int temp = arr[i];
                    arr[i] = arr[i + 2];
                    arr[i + 2] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
